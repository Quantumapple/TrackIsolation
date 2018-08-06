#ifndef withEM_SingleCrys_h
#define withEM_SingleCrys_h

double SW_func2_dphi_v2(int region, double eget){
 double p[5] = {};

 if(region == 1){
   p[0] = 0.00460341;
   p[1] = 0.342664;
   p[2] = -0.0331638;
   p[3] = 0.352677;
   p[4] = 0.52688;
 }

 if(region == 2){
   p[0] = 0.00433023;
   p[1] = 0.345418;
   p[2] = -0.0812881;
   p[3] = 0.340587;
   p[4] = 0.537429;
 }

 if(region == 3){
   p[0] = 0.000144747;
   p[1] = 0.28076;
   p[2] = -0.0873595;
   p[3] = 0.284821;
   p[4] = 0.368885;
 }

 if(region == 4){
   p[0] = -0.00142974;
   p[1] = 0.288398;
   p[2] = -0.818192;
   p[3] = -0.0417389;
   p[4] = 0.709082;
 }

 if(region == 5){
   p[0] = -0.00408571;
   p[1] = 0.145543;
   p[2] = -0.172213;
   p[3] = 0.193732;
   p[4] = 0.0531367;
 }

 return p[0]*pow(eget,0) + p[1]*pow(eget,p[2])*exp(-pow(eget,p[3])+p[4]);
}

double SW_func2_deta_v2(double eget){

 double p[1] = {};

 p[0] = -1.67124e-05;

 return p[0]*pow(eget,0);

}


double SW_func2( int dp_de_dr, int i, double x, int region, int up_down){

double p[5];

if( region == 1){

if( dp_de_dr == 1 && i == 0 && up_down == 0){
p[0] = 0.00834645;
p[1] = 0.0166389;
p[2] = -0.726121;
p[3] = 0.090097;
p[4] = 4.20043;
return p[0]*pow(x,0) + p[1]*pow(x,p[2])*exp(-pow(x,p[3])+p[4]);
}
if( dp_de_dr == 1 && i == 0 && up_down == 1){
p[0] = -0.0087698;
p[1] = 0.624171;
p[2] = -0.479326;
p[3] = 0.264188;
p[4] = 0.517223;
return p[0]*pow(x,0) + p[1]*pow(x,p[2])*exp(-pow(x,p[3])+p[4]);
}


if( dp_de_dr == 1 && i == 1 && up_down == 0){
p[0] = 0.0117145;
p[1] = 0.063624;
p[2] = -0.275601;
p[3] = 0.285446;
p[4] = 2.44743;
return p[0]*pow(x,0) + p[1]*pow(x,p[2])*exp(-pow(x,p[3])+p[4]);
}
if( dp_de_dr == 1 && i == 1 && up_down == 1){
p[0] = -0.0125535;
p[1] = 0.524614;
p[2] = -0.837545;
p[3] = 0.0687366;
p[4] = 0.900842;
return p[0]*pow(x,0) + p[1]*pow(x,p[2])*exp(-pow(x,p[3])+p[4]);
}


if( dp_de_dr == 1 && i == 2 && up_down == 0){
p[0] = 0.0148253;
p[1] = 0.0324387;
p[2] = 0.381392;
p[3] = 0.408558;
p[4] = 2.14393;
return p[0]*pow(x,0) + p[1]*pow(x,p[2])*exp(-pow(x,p[3])+p[4]);
}
if( dp_de_dr == 1 && i == 2 && up_down == 1){
p[0] = -0.00886606;
p[1] = 0.00709326;
p[2] = -0.153407;
p[3] = 0.349126;
p[4] = 4.60938;
return p[0]*pow(x,0) + p[1]*pow(x,p[2])*exp(-pow(x,p[3])+p[4]);
}


if( dp_de_dr == 1 && i == 3 && up_down == 0){
p[0] = 0.0207925;
p[1] = 0.025948;
p[2] = 0.226779;
p[3] = 0.40459;
p[4] = 2.67192;
return p[0]*pow(x,0) + p[1]*pow(x,p[2])*exp(-pow(x,p[3])+p[4]);
}
if( dp_de_dr == 1 && i == 3 && up_down == 1){
p[0] = 0.402987;
p[1] = -0.254341;
p[2] = -0.00839655;
p[3] = -0.76869;
p[4] = 0.564709;
return p[0]*pow(x,0) + p[1]*pow(x,p[2])*exp(-pow(x,p[3])+p[4]);
}


if( dp_de_dr == 1 && i == 4 && up_down == 0){
p[0] = 0.0165929;
p[1] = 0.0212888;
p[2] = 0.103892;
p[3] = 0.371259;
p[4] = 2.98652;
return p[0]*pow(x,0) + p[1]*pow(x,p[2])*exp(-pow(x,p[3])+p[4]);
}
if( dp_de_dr == 1 && i == 4 && up_down == 1){
p[0] = 0.586674;
p[1] = -0.422152;
p[2] = -0.00442427;
p[3] = -0.955095;
p[4] = 0.381749;
return p[0]*pow(x,0) + p[1]*pow(x,p[2])*exp(-pow(x,p[3])+p[4]);
}


if( dp_de_dr == 1 && i == 5 && up_down == 0){
p[0] = 0.035182;
p[1] = 0.0374133;
p[2] = -0.693292;
p[3] = 0.159454;
p[4] = 3.43822;
return p[0]*pow(x,0) + p[1]*pow(x,p[2])*exp(-pow(x,p[3])+p[4]);
}
if( dp_de_dr == 1 && i == 5 && up_down == 1){
p[0] = 0.505574;
p[1] = -0.32603;
p[2] = -0.0687732;
p[3] = -0.358106;
p[4] = 1.01553;
return p[0]*pow(x,0) + p[1]*pow(x,p[2])*exp(-pow(x,p[3])+p[4]);
}



if( dp_de_dr == 2 && i == 0 && up_down == 0){
p[0] = 0.00263124;
p[1] = 0.0110069;
p[2] = 0.117296;
p[3] = 0.0611982;
p[4] = 0.100251;
return p[0]*pow(x,0) + p[1]*pow(x,p[2])*exp(-pow(x,p[3])+p[4]);
}
if( dp_de_dr == 2 && i == 0 && up_down == 1){
p[0] = -0.00825026;
p[1] = -0.0140541;
p[2] = -0.135838;
p[3] = 0.576533;
p[4] = -0.566831;
return p[0]*pow(x,0) + p[1]*pow(x,p[2])*exp(-pow(x,p[3])+p[4]);
}


if( dp_de_dr == 2 && i == 1 && up_down == 0){
p[0] = 0.00268822;
p[1] = 0.0113071;
p[2] = 0.0976017;
p[3] = 0.0575914;
p[4] = 0.148867;
return p[0]*pow(x,0) + p[1]*pow(x,p[2])*exp(-pow(x,p[3])+p[4]);
}
if( dp_de_dr == 2 && i == 1 && up_down == 1){
p[0] = -0.00832909;
p[1] = -0.0142409;
p[2] = -0.136186;
p[3] = 0.580576;
p[4] = -0.568272;
return p[0]*pow(x,0) + p[1]*pow(x,p[2])*exp(-pow(x,p[3])+p[4]);
}


if( dp_de_dr == 2 && i == 2 && up_down == 0){
p[0] = 0.00437857;
p[1] = 0.0104389;
p[2] = 0.150468;
p[3] = 0.107505;
p[4] = 0.0305208;
return p[0]*pow(x,0) + p[1]*pow(x,p[2])*exp(-pow(x,p[3])+p[4]);
}
if( dp_de_dr == 2 && i == 2 && up_down == 1){
p[0] = -0.00877322;
p[1] = -0.0152926;
p[2] = -0.138251;
p[3] = 0.60584;
p[4] = -0.576728;
return p[0]*pow(x,0) + p[1]*pow(x,p[2])*exp(-pow(x,p[3])+p[4]);
}


if( dp_de_dr == 2 && i == 3 && up_down == 0){
p[0] = 0.0042928;
p[1] = 0.0113199;
p[2] = 0.115959;
p[3] = 0.090729;
p[4] = 0.129239;
return p[0]*pow(x,0) + p[1]*pow(x,p[2])*exp(-pow(x,p[3])+p[4]);
}
if( dp_de_dr == 2 && i == 3 && up_down == 1){
p[0] = -0.00934427;
p[1] = -0.0166563;
p[2] = -0.140829;
p[3] = 0.634744;
p[4] = -0.586707;
return p[0]*pow(x,0) + p[1]*pow(x,p[2])*exp(-pow(x,p[3])+p[4]);
}


if( dp_de_dr == 2 && i == 4 && up_down == 0){
p[0] = 0.00694462;
p[1] = 0.0113144;
p[2] = 0.11096;
p[3] = 0.161001;
p[4] = 0.113888;
return p[0]*pow(x,0) + p[1]*pow(x,p[2])*exp(-pow(x,p[3])+p[4]);
}
if( dp_de_dr == 2 && i == 4 && up_down == 1){
p[0] = -0.0102437;
p[1] = 0.0269954;
p[2] = 1.83376;
p[3] = 0.690874;
p[4] = -2.43207;
return p[0]*pow(x,0) + p[1]*pow(x,p[2])*exp(-pow(x,p[3])+p[4]);
}


if( dp_de_dr == 2 && i == 5 && up_down == 0){
p[0] = 0.0201397;
p[1] = 0.0519829;
p[2] = -0.482622;
p[3] = 0.883343;
p[4] = 9.45534;
return p[0]*pow(x,0) + p[1]*pow(x,p[2])*exp(-pow(x,p[3])+p[4]);
}
if( dp_de_dr == 2 && i == 5 && up_down == 1){
p[0] = -0.0220101;
p[1] = -0.0484697;
p[2] = -0.17502;
p[3] = 1.40717;
p[4] = -0.731932;
return p[0]*pow(x,0) + p[1]*pow(x,p[2])*exp(-pow(x,p[3])+p[4]);
}




if( dp_de_dr == 3 && i == 0 && up_down == 0){
p[0] = 0.00999913;
p[1] = 0.160381;
p[2] = -0.498558;
p[3] = 0.273244;
p[4] = 2.40583;
return p[0]*pow(x,0) + p[1]*pow(x,p[2])*exp(-pow(x,p[3])+p[4]);
}
if( dp_de_dr == 3 && i == 0 && up_down == 1){
p[0] = -0.00147952;
p[1] = 0.0584511;
p[2] = -0.031719;
p[3] = 0.378613;
p[4] = 2.44623;
return p[0]*pow(x,0) + p[1]*pow(x,p[2])*exp(-pow(x,p[3])+p[4]);
}


if( dp_de_dr == 3 && i == 1 && up_down == 0){
p[0] = 0.00999861;
p[1] = 0.139607;
p[2] = -0.495628;
p[3] = 0.269309;
p[4] = 2.50982;
return p[0]*pow(x,0) + p[1]*pow(x,p[2])*exp(-pow(x,p[3])+p[4]);
}
if( dp_de_dr == 3 && i == 1 && up_down == 1){
p[0] = -0.00140439;
p[1] = 0.0572804;
p[2] = -0.0251072;
p[3] = 0.383264;
p[4] = 2.47263;
return p[0]*pow(x,0) + p[1]*pow(x,p[2])*exp(-pow(x,p[3])+p[4]);
}


if( dp_de_dr == 3 && i == 2 && up_down == 0){
p[0] = 0.0099988;
p[1] = 0.135165;
p[2] = -0.497772;
p[3] = 0.267196;
p[4] = 2.54722;
return p[0]*pow(x,0) + p[1]*pow(x,p[2])*exp(-pow(x,p[3])+p[4]);
}
if( dp_de_dr == 3 && i == 2 && up_down == 1){
p[0] = -0.00140916;
p[1] = 0.0597237;
p[2] = -0.0998851;
p[3] = 0.377441;
p[4] = 2.57649;
return p[0]*pow(x,0) + p[1]*pow(x,p[2])*exp(-pow(x,p[3])+p[4]);
}


if( dp_de_dr == 3 && i == 3 && up_down == 0){
p[0] = 0.01;
p[1] = 0.142703;
p[2] = -0.49041;
p[3] = 0.273039;
p[4] = 2.48455;
return p[0]*pow(x,0) + p[1]*pow(x,p[2])*exp(-pow(x,p[3])+p[4]);
}
if( dp_de_dr == 3 && i == 3 && up_down == 1){
p[0] = -0.0018943;
p[1] = 0.0699288;
p[2] = -0.344864;
p[3] = 0.333373;
p[4] = 2.73988;
return p[0]*pow(x,0) + p[1]*pow(x,p[2])*exp(-pow(x,p[3])+p[4]);
}


if( dp_de_dr == 3 && i == 4 && up_down == 0){
p[0] = 0.00998292;
p[1] = 0.144959;
p[2] = -0.490075;
p[3] = 0.26977;
p[4] = 2.45502;
return p[0]*pow(x,0) + p[1]*pow(x,p[2])*exp(-pow(x,p[3])+p[4]);
}
if( dp_de_dr == 3 && i == 4 && up_down == 1){
p[0] = -0.00481164;
p[1] = 0.0684213;
p[2] = -0.940739;
p[3] = 0.112571;
p[4] = 3.32132;
return p[0]*pow(x,0) + p[1]*pow(x,p[2])*exp(-pow(x,p[3])+p[4]);
}


if( dp_de_dr == 3 && i == 5 && up_down == 0){
p[0] = 0.00999861;
p[1] = 0.144799;
p[2] = -0.49426;
p[3] = 0.268829;
p[4] = 2.43326;
return p[0]*pow(x,0) + p[1]*pow(x,p[2])*exp(-pow(x,p[3])+p[4]);
}
if( dp_de_dr == 3 && i == 5 && up_down == 1){
p[0] = -0.00119211;
p[1] = 0.050165;
p[2] = -0.169842;
p[3] = 0.379699;
p[4] = 2.84586;
return p[0]*pow(x,0) + p[1]*pow(x,p[2])*exp(-pow(x,p[3])+p[4]);
}



}

} 


#endif
