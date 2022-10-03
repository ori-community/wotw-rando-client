#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DeletedRowInaccessibleException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DeletedRowInaccessibleException__Class** type_info;
        inline app::DeletedRowInaccessibleException__Class* get_class() {
            return il2cpp::get_class<app::DeletedRowInaccessibleException__Class>(type_info, "System.Data", "DeletedRowInaccessibleException");
        }
        inline app::DeletedRowInaccessibleException* create() {
            return il2cpp::create_object<app::DeletedRowInaccessibleException>(get_class());
        }
    } // namespace DeletedRowInaccessibleException
} // namespace app::classes::types
