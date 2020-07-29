#include<iostream>
#include<math>

class ImuFilter{
    public:
        ImuFilter();
        virtual ~InuFilter();
    private:
        double gain;
        double zeta;
        double q0,q1,q2,q3;
        float  wbx,wby,wbz;
    public:
        void setAlgorithmGain(double gain_){
           gain=gain_; 
        }
        void setDrftBiasGain(double zeta_){
            zeta=zeta_;
        }
        void getorientation(double& q0,double& q1,double& q2,double& q3){
        }

    
};
