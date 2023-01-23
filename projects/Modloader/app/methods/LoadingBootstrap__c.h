#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LoadingBootstrap_c.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/IPrewarmOperation.h>

namespace app::classes::LoadingBootstrap___c {
    IL2CPP_REGISTER_METHOD(0x00FBDF10, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::LoadingBootstrap_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FBE050, bool, _Start_b__25_0, (app::LoadingBootstrap_c * this_ptr, app::String* o))
    IL2CPP_REGISTER_METHODINFO(0x0474D180, LoadingBootstrap_c__Start_b__25_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00FBE100, int32_t, _FinishPrewarmingSlot_b__28_1, (app::LoadingBootstrap_c * this_ptr, app::IPrewarmOperation* x))
    IL2CPP_REGISTER_METHODINFO(0x047956A0, LoadingBootstrap_c__FinishPrewarmingSlot_b__28_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00FBE190, int32_t, _FinishPrewarmingSlot_b__28_3, (app::LoadingBootstrap_c * this_ptr, app::IPrewarmOperation* x))
    IL2CPP_REGISTER_METHODINFO(0x04759BF8, LoadingBootstrap_c__FinishPrewarmingSlot_b__28_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00FBE220, int32_t, _PrewarmStep_b__29_1, (app::LoadingBootstrap_c * this_ptr, app::IPrewarmOperation* x))
    IL2CPP_REGISTER_METHODINFO(0x0475F9D8, LoadingBootstrap_c__PrewarmStep_b__29_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00FBE2B0, int32_t, _DrawPreloadDebug_b__37_1, (app::LoadingBootstrap_c * this_ptr, app::IPrewarmOperation* x))
    IL2CPP_REGISTER_METHODINFO(0x04715B60, LoadingBootstrap_c__DrawPreloadDebug_b__37_1__MethodInfo)
} // namespace app::classes::LoadingBootstrap___c
