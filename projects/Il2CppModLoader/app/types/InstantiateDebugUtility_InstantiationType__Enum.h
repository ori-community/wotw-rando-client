#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InstantiateDebugUtility_InstantiationType__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InstantiateDebugUtility_InstantiationType__Enum__Class** type_info;
        inline app::InstantiateDebugUtility_InstantiationType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::InstantiateDebugUtility_InstantiationType__Enum__Class>(type_info, "InstantiateDebug", "InstantiateDebugUtility", "InstantiationType");
        }
        inline app::InstantiateDebugUtility_InstantiationType__Enum* create() {
            return il2cpp::create_object<app::InstantiateDebugUtility_InstantiationType__Enum>(get_class());
        }
    } // namespace InstantiateDebugUtility_InstantiationType__Enum
} // namespace app::classes::types
