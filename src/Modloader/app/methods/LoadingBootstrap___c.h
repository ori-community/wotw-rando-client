#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IPrewarmOperation.h>
#include <Modloader/app/structs/LoadingBootstrap_c.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::LoadingBootstrap___c {
    IL2CPP_REGISTER_METHOD(0x00FBDF10, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::LoadingBootstrap_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FBE050, bool, _Start_b__25_0, app::LoadingBootstrap_c* this_ptr, app::String* o)
    IL2CPP_REGISTER_METHOD(0x00FBE100, int32_t, _FinishPrewarmingSlot_b__28_1, app::LoadingBootstrap_c* this_ptr, app::IPrewarmOperation* x)
    IL2CPP_REGISTER_METHOD(0x00FBE190, int32_t, _FinishPrewarmingSlot_b__28_3, app::LoadingBootstrap_c* this_ptr, app::IPrewarmOperation* x)
    IL2CPP_REGISTER_METHOD(0x00FBE220, int32_t, _PrewarmStep_b__29_1, app::LoadingBootstrap_c* this_ptr, app::IPrewarmOperation* x)
    IL2CPP_REGISTER_METHOD(0x00FBE2B0, int32_t, _DrawPreloadDebug_b__37_1, app::LoadingBootstrap_c* this_ptr, app::IPrewarmOperation* x)
} // namespace app::classes::LoadingBootstrap___c
