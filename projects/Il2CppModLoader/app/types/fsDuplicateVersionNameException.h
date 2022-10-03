#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace fsDuplicateVersionNameException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::fsDuplicateVersionNameException__Class** type_info;
        inline app::fsDuplicateVersionNameException__Class* get_class() {
            return il2cpp::get_class<app::fsDuplicateVersionNameException__Class>(type_info, "FullSerializer", "fsDuplicateVersionNameException");
        }
        inline app::fsDuplicateVersionNameException* create() {
            return il2cpp::create_object<app::fsDuplicateVersionNameException>(get_class());
        }
    } // namespace fsDuplicateVersionNameException
} // namespace app::classes::types
