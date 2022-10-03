#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InstantiationRecycleHelper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InstantiationRecycleHelper__Class** type_info;
        inline app::InstantiationRecycleHelper__Class* get_class() {
            return il2cpp::get_class<app::InstantiationRecycleHelper__Class>(type_info, "", "InstantiationRecycleHelper");
        }
        inline app::InstantiationRecycleHelper* create() {
            return il2cpp::create_object<app::InstantiationRecycleHelper>(get_class());
        }
    } // namespace InstantiationRecycleHelper
} // namespace app::classes::types
