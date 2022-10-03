#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RowNotInTableException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RowNotInTableException__Class** type_info;
        inline app::RowNotInTableException__Class* get_class() {
            return il2cpp::get_class<app::RowNotInTableException__Class>(type_info, "System.Data", "RowNotInTableException");
        }
        inline app::RowNotInTableException* create() {
            return il2cpp::create_object<app::RowNotInTableException>(get_class());
        }
    } // namespace RowNotInTableException
} // namespace app::classes::types
