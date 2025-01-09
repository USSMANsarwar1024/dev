pipeline {
    agent none
    stages {
        stage('Non-Parallel Stage') {
            agent {
                label "master"
            }
            steps {
                echo "This stage will be executed first"
            }
        }

        stage('Run Tests') {
            parallel {
                stage('Test on Windows') {
                    agent {
                        label "Window_Node"
                    }
                    steps {
                        echo "Task-1 on agent"
                    }
                }

                stage('Test on Master') {
                    agent {
                        label "master"
                    }
                    steps {
                        echo "Task-1 on Master"
                    }
                }
            }
        }
    }
}
