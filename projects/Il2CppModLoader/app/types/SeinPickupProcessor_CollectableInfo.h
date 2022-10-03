#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinPickupProcessor_CollectableInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinPickupProcessor_CollectableInfo__Class** type_info;
        inline app::SeinPickupProcessor_CollectableInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinPickupProcessor_CollectableInfo__Class>(type_info, "", "SeinPickupProcessor", "CollectableInfo");
        }
        inline app::SeinPickupProcessor_CollectableInfo* create() {
            return il2cpp::create_object<app::SeinPickupProcessor_CollectableInfo>(get_class());
        }
    } // namespace SeinPickupProcessor_CollectableInfo
} // namespace app::classes::types
