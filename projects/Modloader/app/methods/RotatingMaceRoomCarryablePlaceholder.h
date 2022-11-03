#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::RotatingMaceRoomCarryablePlaceholder {
    IL2CPP_REGISTER_METHOD(0x0136E9A0, void, Awake, (app::RotatingMaceRoomCarryablePlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0136EB30, void, OnDestroy, (app::RotatingMaceRoomCarryablePlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0136ECC0, void, Start, (app::RotatingMaceRoomCarryablePlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0136EDA0, void, Update, (app::RotatingMaceRoomCarryablePlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0136EE70, void, SpawnPrefab, (app::RotatingMaceRoomCarryablePlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0136F290, void, Serialize, (app::RotatingMaceRoomCarryablePlaceholder * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnGameSerializeLoad, (app::RotatingMaceRoomCarryablePlaceholder * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473F758, RotatingMaceRoomCarryablePlaceholder_OnGameSerializeLoad__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0136F3E0, void, DestroyCurrentInstance, (app::RotatingMaceRoomCarryablePlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::RotatingMaceRoomCarryablePlaceholder * this_ptr))
} // namespace app::classes::RotatingMaceRoomCarryablePlaceholder
