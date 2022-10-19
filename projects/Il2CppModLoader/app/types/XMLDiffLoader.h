#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XMLDiffLoader {
        inline app::XMLDiffLoader__Class** type_info = (app::XMLDiffLoader__Class**)(modloader::win::memory::resolve_rva(0x04750E50));
        inline app::XMLDiffLoader__Class* get_class() {
            return il2cpp::get_class<app::XMLDiffLoader__Class>(type_info, "System.Data", "XMLDiffLoader");
        }
        inline app::XMLDiffLoader* create() {
            return il2cpp::create_object<app::XMLDiffLoader>(get_class());
        }
    } // namespace XMLDiffLoader
} // namespace app::classes::types
