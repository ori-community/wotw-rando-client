#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EtwSession_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EtwSession_c__Class** type_info;
        inline app::EtwSession_c__Class* get_class() {
            return il2cpp::get_nested_class<app::EtwSession_c__Class>(type_info, "System.Diagnostics.Tracing", "EtwSession", "<>c");
        }
        inline app::EtwSession_c* create() {
            return il2cpp::create_object<app::EtwSession_c>(get_class());
        }
    } // namespace EtwSession_c
} // namespace app::classes::types
