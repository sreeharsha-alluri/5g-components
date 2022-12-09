node('slave1'){
    stage('cloning'){
        sh 'rm -rf oai-components1'
        sh 'mv oai-components oai-components1'
        withCredentials([gitUsernamePassword(credentialsId: 'a404907f-5966-4118-ad75-565ff26acb1d', gitToolName: 'Default')]) {
            sh 'git clone https://git-codecommit.us-east-1.amazonaws.com/v1/repos/oai-components.git'
            echo "Hello"
        }
    }
    stage('Building Docker Images'){
        // sh "docker build --target oai-amf --tag oai-amf:v1.4.${BUILD_NUMBER} --file oai-components/component/oai-amf/docker/Dockerfile.amf.ubuntu18 --build-arg BASE_IMAGE=ubuntu:focal oai-components/component/oai-amf "                       
        // sh "docker build --target oai-smf --tag oai-smf:v1.4.${BUILD_NUMBER} --file oai-components/component/oai-smf/docker/Dockerfile.smf.ubuntu18 --build-arg BASE_IMAGE=ubuntu:22.04 oai-components/component/oai-smf "
        // sh "docker build --target oai-nrf --tag oai-nrf:v1.4.${BUILD_NUMBER} --file oai-components/component/oai-nrf/docker/Dockerfile.nrf.ubuntu18 --build-arg BASE_IMAGE=ubuntu:jammy oai-components/component/oai-nrf "
        // sh "docker build --target oai-spgwu-tiny --tag oai-spgwu-tiny:v1.4.${BUILD_NUMBER} --file oai-components/component/oai-upf-equivalent/docker/Dockerfile.ubuntu18.04 --build-arg BASE_IMAGE=ubuntu:20.04 oai-components/component/oai-upf-equivalent "
        // sh "docker build --target oai-ausf --tag oai-ausf:v1.4.${BUILD_NUMBER} --file oai-components/component/oai-ausf/docker/Dockerfile.ausf.ubuntu18 oai-components/component/oai-ausf "
        // sh "docker build --target oai-udm --tag oai-udm:v1.4.${BUILD_NUMBER}   --file oai-components/component/oai-udm/docker/Dockerfile.udm.ubuntu18 oai-components/component/oai-udm "
        // sh "docker build --target oai-udr --tag oai-udr:v1.4.${BUILD_NUMBER}   --file oai-components/component/oai-udr/docker/Dockerfile.udr.ubuntu18 oai-components/component/oai-udr "
        // sh "docker build --target oai-upf-vpp --tag oai-upf-vpp:v1.4.${BUILD_NUMBER} --file oai-components/component/oai-upf-vpp/docker/Dockerfile.upf-vpp.ubuntu oai-components/component/oai-upf-vpp"
        // sh "docker build --target oai-nssf --tag oai-nssf:v1.4.${BUILD_NUMBER} --file oai-components/component/oai-nssf/docker/Dockerfile.nssf.ubuntu18 oai-components/component/oai-nssf "
        // sh "docker build --target trf-gen-cn5g --tag trf-gen-cn5g:v1.4.${BUILD_NUMBER} --file oai-components/ci-scripts/Dockerfile.traffic.generator.ubuntu18.04 . "
        echo "done"
    }
    stage('Vulnerability Scan for Docker images'){
        sh 'grype docker:oai-amf:v1.4.11'
        sh 'grype docker:oai-smf:v1.4.11'
        sh 'grype docker:oai-nrf:v1.4.11'
        sh 'grype docker:oai-spgwu-tiny:v1.4.11'
        sh 'grype docker:oai-ausf:v1.4.11'
        sh 'grype docker:oai-udm:v1.4.11'
        sh 'grype docker:oai-udr:v1.4.11'
        sh 'grype docker:oai-upf-vpp:v1.4.11'
        sh 'grype docker:oai-nssf:v1.4.11'
        sh 'grype docker:trf-gen-cn5g:v1.4.11'
    }
}