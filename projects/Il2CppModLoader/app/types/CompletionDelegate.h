#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CompletionDelegate {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CompletionDelegate__Class** type_info;
        inline app::CompletionDelegate__Class* get_class() {
            return il2cpp::get_class<app::CompletionDelegate__Class>(type_info, "System.Net", "CompletionDelegate");
        }
        inline app::CompletionDelegate* create() {
            return il2cpp::create_object<app::CompletionDelegate>(get_class());
        }
    } // namespace CompletionDelegate
} // namespace app::classes::types
