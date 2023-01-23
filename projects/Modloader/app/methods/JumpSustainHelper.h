#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/JumpSustainHelper.h>

namespace app::classes::JumpSustainHelper {
    IL2CPP_REGISTER_METHOD(0x00E50E70, void, Awake, (app::JumpSustainHelper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E51250, void, OnDestroy, (app::JumpSustainHelper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E517A0, void, OnWallJump, (app::JumpSustainHelper * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474F370, JumpSustainHelper_OnWallJump__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00E51AE0, void, OnDoubleJump, (app::JumpSustainHelper * this_ptr, float jump_strength))
    IL2CPP_REGISTER_METHODINFO(0x04788CF0, JumpSustainHelper_OnDoubleJump__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00E51AF0, void, OnJump, (app::JumpSustainHelper * this_ptr, float speed))
    IL2CPP_REGISTER_METHODINFO(0x04706C70, JumpSustainHelper_OnJump__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00E51D80, void, OnGUI, (app::JumpSustainHelper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E51F20, void, Update, (app::JumpSustainHelper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E51F40, void, UpdateAnalyzingWallJumps, (app::JumpSustainHelper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E52230, void, UpdateAnalyzingGroundJumps, (app::JumpSustainHelper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E52640, void, CompleteAnalysis, (app::JumpSustainHelper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E52C30, void, ctor, (app::JumpSustainHelper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E52DD0, bool, _CompleteAnalysis_b__33_0, (app::JumpSustainHelper * this_ptr, float result))
    IL2CPP_REGISTER_METHODINFO(0x047436D0, JumpSustainHelper__CompleteAnalysis_b__33_0__MethodInfo)
} // namespace app::classes::JumpSustainHelper
