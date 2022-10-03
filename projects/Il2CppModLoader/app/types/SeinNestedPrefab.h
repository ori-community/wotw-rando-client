#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinNestedPrefab {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinNestedPrefab__Class** type_info;
        inline app::SeinNestedPrefab__Class* get_class() {
            return il2cpp::get_class<app::SeinNestedPrefab__Class>(type_info, "", "SeinNestedPrefab");
        }
        inline app::SeinNestedPrefab* create() {
            return il2cpp::create_object<app::SeinNestedPrefab>(get_class());
        }
        inline app::SeinNestedPrefab__Array* create_array(int size) {
            return il2cpp::array_new<app::SeinNestedPrefab__Array>(get_class(), size);
        }
    } // namespace SeinNestedPrefab
} // namespace app::classes::types
