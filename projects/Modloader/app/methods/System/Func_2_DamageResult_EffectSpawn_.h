#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Func_2_DamageResult_EffectSpawn_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/EffectSpawn.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::System::Func_2_DamageResult_EffectSpawn_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_2_DamageResult_EffectSpawn_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHODINFO(0x04752500, Func_2_DamageResult_EffectSpawn___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02882A20, app::EffectSpawn, Invoke, (app::Func_2_DamageResult_EffectSpawn_ * this_ptr, app::DamageResult arg))
    IL2CPP_REGISTER_METHODINFO(0x04788A30, Func_2_DamageResult_EffectSpawn__Invoke__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02883020, app::IAsyncResult*, BeginInvoke, (app::Func_2_DamageResult_EffectSpawn_ * this_ptr, app::DamageResult arg, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x028830F0, app::EffectSpawn, EndInvoke, (app::Func_2_DamageResult_EffectSpawn_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Func_2_DamageResult_EffectSpawn_
