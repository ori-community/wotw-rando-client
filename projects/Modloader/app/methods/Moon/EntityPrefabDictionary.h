#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EntityPrefabDictionary.h>

namespace app::classes::Moon::EntityPrefabDictionary {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBeforeSerialize, app::EntityPrefabDictionary* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAfterDeserialize, app::EntityPrefabDictionary* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012209A0, void, ctor, app::EntityPrefabDictionary* this_ptr)
} // namespace app::classes::Moon::EntityPrefabDictionary
