#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Predicate_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_ColorRequest_.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/UberShaderAnimatorStrategyExperimental_ColorRequest.h>

namespace app::classes::System::Predicate_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_ColorRequest_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Predicate_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_ColorRequest_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02882470, bool, Invoke, (app::Predicate_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_ColorRequest_ * this_ptr, app::UberShaderAnimatorStrategyExperimental_ColorRequest obj))
    IL2CPP_REGISTER_METHOD(0x02892580, app::IAsyncResult*, BeginInvoke, (app::Predicate_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_ColorRequest_ * this_ptr, app::UberShaderAnimatorStrategyExperimental_ColorRequest obj, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::Predicate_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_ColorRequest_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Predicate_1_Moon_Timeline_UberShaderAnimatorStrategyExperimental_ColorRequest_
