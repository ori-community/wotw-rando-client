#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ResourceReader_ResourceEnumerator {
        inline app::ResourceReader_ResourceEnumerator__Class** type_info = (app::ResourceReader_ResourceEnumerator__Class**)(modloader::win::memory::resolve_rva(0x04799800));
        inline app::ResourceReader_ResourceEnumerator__Class* get_class() {
            return il2cpp::get_nested_class<app::ResourceReader_ResourceEnumerator__Class>(type_info, "System.Resources", "ResourceReader", "ResourceEnumerator");
        }
        inline app::ResourceReader_ResourceEnumerator* create() {
            return il2cpp::create_object<app::ResourceReader_ResourceEnumerator>(get_class());
        }
    } // namespace ResourceReader_ResourceEnumerator
} // namespace app::classes::types
