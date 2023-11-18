#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BaseInvokableCall.h>
#include <Modloader/app/structs/Delegate.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::UnityEngine::Events::BaseInvokableCall {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, (app::BaseInvokableCall * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0242E930, void, ctor_2, (app::BaseInvokableCall * this_ptr, app::Object* target, app::MethodInfo_1* function))
    IL2CPP_REGISTER_METHOD(0x0242EA20, bool, AllowInvoke, (app::Delegate * delegate))
    IL2CPP_REGISTER_METHOD(0x015E4BF0, void, ThrowOnInvalidArg_1, (app::Object * arg))
    IL2CPP_REGISTER_METHOD(0x015E4850, void, ThrowOnInvalidArg_2, (app::Object * arg))
    IL2CPP_REGISTER_METHOD(0x015E4A20, void, ThrowOnInvalidArg_3, (app::Object * arg))
    IL2CPP_REGISTER_METHOD(0x015E4DC0, void, ThrowOnInvalidArg_4, (app::Object * arg))
    IL2CPP_REGISTER_METHOD(0x015E4F90, void, ThrowOnInvalidArg_5, (app::Object * arg))
    IL2CPP_REGISTER_METHOD(0x015E5160, void, ThrowOnInvalidArg_6, (app::Object * arg))
} // namespace app::classes::UnityEngine::Events::BaseInvokableCall
