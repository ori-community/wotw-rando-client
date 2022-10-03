#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SpiritLanternPlaceholder {
    IL2CPP_REGISTER_METHOD(0x00D5B890, void, Start, (app::SpiritLanternPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SpiritLanternPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, IDisableOnRecordablePreview_get_gameObject, (app::SpiritLanternPlaceholder * this_ptr))
} // namespace app::classes::SpiritLanternPlaceholder
