#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DuplicateNameException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DuplicateNameException__Class** type_info;
        inline app::DuplicateNameException__Class* get_class() {
            return il2cpp::get_class<app::DuplicateNameException__Class>(type_info, "System.Data", "DuplicateNameException");
        }
        inline app::DuplicateNameException* create() {
            return il2cpp::create_object<app::DuplicateNameException>(get_class());
        }
    } // namespace DuplicateNameException
} // namespace app::classes::types
