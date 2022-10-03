#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::RootMotion::FinalIK::FBBIKHeadEffector {
    IL2CPP_REGISTER_METHOD(0x02055F30, void, Awake, (app::FBBIKHeadEffector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02056880, void, OnStoreDefaultLocalState, (app::FBBIKHeadEffector * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047839C8, FBBIKHeadEffector_OnStoreDefaultLocalState__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020570C0, void, OnFixTransforms, (app::FBBIKHeadEffector * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472F518, FBBIKHeadEffector_OnFixTransforms__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02057940, void, OnPreRead, (app::FBBIKHeadEffector * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473E008, FBBIKHeadEffector_OnPreRead__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02058550, void, SpineBend, (app::FBBIKHeadEffector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02058CC0, void, CCDPass, (app::FBBIKHeadEffector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020592B0, void, Iterate, (app::FBBIKHeadEffector * this_ptr, int32_t iteration))
    IL2CPP_REGISTER_METHODINFO(0x0475A928, FBBIKHeadEffector_Iterate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0205A1D0, void, OnPostUpdate, (app::FBBIKHeadEffector * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470E190, FBBIKHeadEffector_OnPostUpdate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0205A690, void, ChestDirection, (app::FBBIKHeadEffector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0205AC40, void, PostStretching, (app::FBBIKHeadEffector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0205B2D0, void, LerpSolverPosition, (app::FBBIKHeadEffector * this_ptr, app::IKEffector* effector, app::Vector3 position, float weight, app::Vector3 offset))
    IL2CPP_REGISTER_METHOD(0x0205B560, void, Solve, (app::FBBIKHeadEffector * this_ptr, app::Vector3* pos1, app::Vector3* pos2, float nominal_distance))
    IL2CPP_REGISTER_METHOD(0x0205B790, void, OnDestroy, (app::FBBIKHeadEffector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0205BE80, void, ctor, (app::FBBIKHeadEffector * this_ptr))
} // namespace app::classes::RootMotion::FinalIK::FBBIKHeadEffector
