#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ResourceReader_ResourceEnumerator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ResourceReader_ResourceEnumerator__Class** type_info;
        inline app::ResourceReader_ResourceEnumerator__Class* get_class() {
            return il2cpp::get_nested_class<app::ResourceReader_ResourceEnumerator__Class>(type_info, "System.Resources", "ResourceReader", "ResourceEnumerator");
        }
        inline app::ResourceReader_ResourceEnumerator* create() {
            return il2cpp::create_object<app::ResourceReader_ResourceEnumerator>(get_class());
        }
    } // namespace ResourceReader_ResourceEnumerator
} // namespace app::classes::types
