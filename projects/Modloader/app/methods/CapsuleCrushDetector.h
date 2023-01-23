#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CapsuleCrushDetector.h>
#include <Modloader/app/structs/PlatformBehaviour.h>
#include <Modloader/app/structs/MoonControllerColliderHit.h>
#include <Modloader/app/structs/Collision.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/CrushPlayer.h>

namespace app::classes::CapsuleCrushDetector {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (app::CapsuleCrushDetector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B238D0, app::PlatformBehaviour*, get_PlatformBehaviour, (app::CapsuleCrushDetector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B238F0, bool, get_OnCeiling, (app::CapsuleCrushDetector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B23950, bool, get_OnGround, (app::CapsuleCrushDetector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B239B0, bool, get_OnWallLeft, (app::CapsuleCrushDetector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B23A10, bool, get_OnWallRight, (app::CapsuleCrushDetector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B23A70, void, Start, (app::CapsuleCrushDetector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B23DA0, void, OnDestroy, (app::CapsuleCrushDetector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B240D0, void, OnMoonControllerCollision, (app::CapsuleCrushDetector * this_ptr, app::MoonControllerColliderHit hit))
    IL2CPP_REGISTER_METHODINFO(0x047446C8, CapsuleCrushDetector_OnMoonControllerCollision__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B24110, void, OnNativeCollision, (app::CapsuleCrushDetector * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHODINFO(0x0471E470, CapsuleCrushDetector_OnNativeCollision__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B241B0, void, OnCollision, (app::CapsuleCrushDetector * this_ptr, app::Vector3 normal, app::Collider* other))
    IL2CPP_REGISTER_METHOD(0x00B249D0, void, OnTriggerEnter, (app::CapsuleCrushDetector * this_ptr, app::Collider* collider))
    IL2CPP_REGISTER_METHOD(0x00B249D0, void, OnTriggerStay, (app::CapsuleCrushDetector * this_ptr, app::Collider* collider))
    IL2CPP_REGISTER_METHOD(0x00B249E0, void, OnTrigger_1, (app::CapsuleCrushDetector * this_ptr, app::CrushPlayer* crush))
    IL2CPP_REGISTER_METHOD(0x00B24AA0, void, OnTrigger_2, (app::CapsuleCrushDetector * this_ptr, app::Collider* collider))
    IL2CPP_REGISTER_METHOD(0x00B24C30, void, OnSetReferenceToSein, (app::CapsuleCrushDetector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B24C60, void, KillOri, (app::CapsuleCrushDetector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B24F50, bool, IsSimilarDirection, (app::CapsuleCrushDetector * this_ptr, app::Vector3 a, app::Vector3 b))
    IL2CPP_REGISTER_METHOD(0x005C9550, void, ctor, (app::CapsuleCrushDetector * this_ptr))
} // namespace app::classes::CapsuleCrushDetector
