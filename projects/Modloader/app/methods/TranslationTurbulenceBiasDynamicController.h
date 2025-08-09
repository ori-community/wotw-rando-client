#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TranslationTurbulenceBiasDynamicController.h>

namespace app::classes::TranslationTurbulenceBiasDynamicController {
    IL2CPP_REGISTER_METHOD(0x00B0B7C0, void, AddSpringVelocityX, app::TranslationTurbulenceBiasDynamicController* this_ptr, float velocity)
    IL2CPP_REGISTER_METHOD(0x00B0B7F0, void, AddSpringVelocityY, app::TranslationTurbulenceBiasDynamicController* this_ptr, float velocity)
    IL2CPP_REGISTER_METHOD(0x00B0B820, void, Awake, app::TranslationTurbulenceBiasDynamicController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B0B930, void, LateUpdate, app::TranslationTurbulenceBiasDynamicController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B0BC70, void, ctor, app::TranslationTurbulenceBiasDynamicController* this_ptr)
} // namespace app::classes::TranslationTurbulenceBiasDynamicController
