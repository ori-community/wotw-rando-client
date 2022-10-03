#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinPrefabSet {
        namespace {
            app::SeinPrefabSet__Class* type_info_ref = nullptr;
        }
        app::SeinPrefabSet__Class** type_info = &type_info_ref;
        inline app::SeinPrefabSet__Class* get_class() {
            return il2cpp::get_class<app::SeinPrefabSet__Class>(type_info, "", "SeinPrefabSet");
        }
        inline app::SeinPrefabSet* create() {
            return il2cpp::create_object<app::SeinPrefabSet>(get_class());
        }
    } // namespace SeinPrefabSet
} // namespace app::classes::types
