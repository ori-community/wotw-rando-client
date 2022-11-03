#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::EffectsFramework::MoonEffectShapeModifier {
    IL2CPP_REGISTER_METHOD(0x01983000, void, Apply, (app::MoonEffectShapeModifier * this_ptr, app::IMoonEffectComponentCache* input, app::MoonEffectRevertHandle* revert_handle))
    IL2CPP_REGISTER_METHOD(0x01983370, void, Revert, (app::MoonEffectShapeModifier * this_ptr, app::MoonEffectGenericRevertibleData_MoonEffectRevertibleData* data))
    IL2CPP_REGISTER_METHOD(0x01983550, void, ctor, (app::MoonEffectShapeModifier * this_ptr))
} // namespace app::classes::Moon::EffectsFramework::MoonEffectShapeModifier
