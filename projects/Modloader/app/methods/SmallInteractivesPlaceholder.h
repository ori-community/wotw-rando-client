#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SmallInteractivesPlaceholder {
    IL2CPP_REGISTER_METHOD(0x006C8990, void, OnValidate, (app::SmallInteractivesPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006C8B70, void, Start, (app::SmallInteractivesPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006C8C50, void, Update, (app::SmallInteractivesPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006C8DD0, void, CleanUpOldInstance, (app::SmallInteractivesPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006C8F60, void, OnEnable, (app::SmallInteractivesPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006C9100, void, OnDisable, (app::SmallInteractivesPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006C9110, void, SpawnPrefab, (app::SmallInteractivesPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006C96B0, bool, CheckCondition, (app::SmallInteractivesPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006C9790, void, OnDrawGizmosSelected, (app::SmallInteractivesPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006C9D10, void, ctor, (app::SmallInteractivesPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, IDisableOnRecordablePreview_get_gameObject, (app::SmallInteractivesPlaceholder * this_ptr))
} // namespace app::classes::SmallInteractivesPlaceholder
