pipeline {
    agent none
    stages {
        stage('Non-Parallel Stage') {
            agent {
                label "built-in"
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
                        sh 'git config --global --add safe.directory D:/Jenkins-Agent/workspace/DevOps-Pipeline'
                        echo "Task-1 on agent"
                        }
                }

                stage('Test on Master') {
                    agent {
                        label "built-in"
                    }
                    steps {
                        echo "Task-1 on Master"
                    }
                }
            }
        }
    }
}
