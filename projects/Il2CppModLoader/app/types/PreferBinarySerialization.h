#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PreferBinarySerialization {
        namespace {
            inline app::PreferBinarySerialization__Class* type_info_ref = nullptr;
        }
        inline app::PreferBinarySerialization__Class** type_info = &type_info_ref;
        inline app::PreferBinarySerialization__Class* get_class() {
            return il2cpp::get_class<app::PreferBinarySerialization__Class>(type_info, "UnityEngine", "PreferBinarySerialization");
        }
        inline app::PreferBinarySerialization* create() {
            return il2cpp::create_object<app::PreferBinarySerialization>(get_class());
        }
    } // namespace PreferBinarySerialization
} // namespace app::classes::types
