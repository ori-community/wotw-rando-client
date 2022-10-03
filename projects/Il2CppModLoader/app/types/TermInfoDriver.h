#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TermInfoDriver {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TermInfoDriver__Class** type_info;
        inline app::TermInfoDriver__Class* get_class() {
            return il2cpp::get_class<app::TermInfoDriver__Class>(type_info, "System", "TermInfoDriver");
        }
        inline app::TermInfoDriver* create() {
            return il2cpp::create_object<app::TermInfoDriver>(get_class());
        }
    } // namespace TermInfoDriver
} // namespace app::classes::types
