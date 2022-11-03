#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::EffectsFramework::MoonEffectRevertHandle {
    IL2CPP_REGISTER_METHOD(0x01982300, void, AddData, (app::MoonEffectRevertHandle * this_ptr, app::IRevertMoonEffectLogic* logic, app::MoonEffectGenericRevertibleData_MoonEffectRevertibleData* data))
    IL2CPP_REGISTER_METHOD(0x019823D0, void, Revert, (app::MoonEffectRevertHandle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01982690, void, Reset, (app::MoonEffectRevertHandle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019828B0, void, ctor, (app::MoonEffectRevertHandle * this_ptr))
} // namespace app::classes::Moon::EffectsFramework::MoonEffectRevertHandle
