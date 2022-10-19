#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace VaryingPrefabProvider {
        namespace {
            inline app::VaryingPrefabProvider__Class* type_info_ref = nullptr;
        }
        inline app::VaryingPrefabProvider__Class** type_info = &type_info_ref;
        inline app::VaryingPrefabProvider__Class* get_class() {
            return il2cpp::get_class<app::VaryingPrefabProvider__Class>(type_info, "", "VaryingPrefabProvider");
        }
        inline app::VaryingPrefabProvider* create() {
            return il2cpp::create_object<app::VaryingPrefabProvider>(get_class());
        }
    } // namespace VaryingPrefabProvider
} // namespace app::classes::types
