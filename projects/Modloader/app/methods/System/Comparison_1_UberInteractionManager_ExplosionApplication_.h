#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Comparison_1_UberInteractionManager_ExplosionApplication_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Comparison_1_UberInteractionManager_ExplosionApplication_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02B8B6D0, int32_t, Invoke, (app::Comparison_1_UberInteractionManager_ExplosionApplication_ * this_ptr, app::UberInteractionManager_ExplosionApplication x, app::UberInteractionManager_ExplosionApplication y))
    IL2CPP_REGISTER_METHOD(0x02C809F0, app::IAsyncResult*, BeginInvoke, (app::Comparison_1_UberInteractionManager_ExplosionApplication_ * this_ptr, app::UberInteractionManager_ExplosionApplication x, app::UberInteractionManager_ExplosionApplication y, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_UberInteractionManager_ExplosionApplication_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Comparison_1_UberInteractionManager_ExplosionApplication_
