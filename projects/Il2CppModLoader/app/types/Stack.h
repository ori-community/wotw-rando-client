#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Stack {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Stack__Class** type_info;
        inline app::Stack__Class* get_class() {
            return il2cpp::get_class<app::Stack__Class>(type_info, "System.Collections", "Stack");
        }
        inline app::Stack* create() {
            return il2cpp::create_object<app::Stack>(get_class());
        }
    } // namespace Stack
} // namespace app::classes::types
