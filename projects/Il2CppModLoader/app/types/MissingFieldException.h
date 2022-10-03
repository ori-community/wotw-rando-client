#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MissingFieldException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MissingFieldException__Class** type_info;
        inline app::MissingFieldException__Class* get_class() {
            return il2cpp::get_class<app::MissingFieldException__Class>(type_info, "System", "MissingFieldException");
        }
        inline app::MissingFieldException* create() {
            return il2cpp::create_object<app::MissingFieldException>(get_class());
        }
    } // namespace MissingFieldException
} // namespace app::classes::types
