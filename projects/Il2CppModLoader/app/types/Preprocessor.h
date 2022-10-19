#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Preprocessor {
        inline app::Preprocessor__Class** type_info = (app::Preprocessor__Class**)(modloader::win::memory::resolve_rva(0x047783D0));
        inline app::Preprocessor__Class* get_class() {
            return il2cpp::get_class<app::Preprocessor__Class>(type_info, "System.Xml.Schema", "Preprocessor");
        }
        inline app::Preprocessor* create() {
            return il2cpp::create_object<app::Preprocessor>(get_class());
        }
    } // namespace Preprocessor
} // namespace app::classes::types
