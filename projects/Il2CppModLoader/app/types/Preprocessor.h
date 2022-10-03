#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Preprocessor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Preprocessor__Class** type_info;
        inline app::Preprocessor__Class* get_class() {
            return il2cpp::get_class<app::Preprocessor__Class>(type_info, "System.Xml.Schema", "Preprocessor");
        }
        inline app::Preprocessor* create() {
            return il2cpp::create_object<app::Preprocessor>(get_class());
        }
    } // namespace Preprocessor
} // namespace app::classes::types
