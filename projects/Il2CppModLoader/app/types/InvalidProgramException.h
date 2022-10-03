#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InvalidProgramException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InvalidProgramException__Class** type_info;
        inline app::InvalidProgramException__Class* get_class() {
            return il2cpp::get_class<app::InvalidProgramException__Class>(type_info, "System", "InvalidProgramException");
        }
        inline app::InvalidProgramException* create() {
            return il2cpp::create_object<app::InvalidProgramException>(get_class());
        }
    } // namespace InvalidProgramException
} // namespace app::classes::types
