#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberShaderWorldHierarchyDictionary {
        inline app::UberShaderWorldHierarchyDictionary__Class** type_info = (app::UberShaderWorldHierarchyDictionary__Class**)(modloader::win::memory::resolve_rva(0x0470B8B0));
        inline app::UberShaderWorldHierarchyDictionary__Class* get_class() {
            return il2cpp::get_class<app::UberShaderWorldHierarchyDictionary__Class>(type_info, "", "UberShaderWorldHierarchyDictionary");
        }
        inline app::UberShaderWorldHierarchyDictionary* create() {
            return il2cpp::create_object<app::UberShaderWorldHierarchyDictionary>(get_class());
        }
    } // namespace UberShaderWorldHierarchyDictionary
} // namespace app::classes::types
