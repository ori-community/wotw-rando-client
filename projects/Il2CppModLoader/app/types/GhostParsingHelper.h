#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GhostParsingHelper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GhostParsingHelper__Class** type_info;
        inline app::GhostParsingHelper__Class* get_class() {
            return il2cpp::get_class<app::GhostParsingHelper__Class>(type_info, "", "GhostParsingHelper");
        }
        inline app::GhostParsingHelper* create() {
            return il2cpp::create_object<app::GhostParsingHelper>(get_class());
        }
    } // namespace GhostParsingHelper
} // namespace app::classes::types
