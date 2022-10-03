#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CompletionActionInvoker {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CompletionActionInvoker__Class** type_info;
        inline app::CompletionActionInvoker__Class* get_class() {
            return il2cpp::get_class<app::CompletionActionInvoker__Class>(type_info, "System.Threading.Tasks", "CompletionActionInvoker");
        }
        inline app::CompletionActionInvoker* create() {
            return il2cpp::create_object<app::CompletionActionInvoker>(get_class());
        }
    } // namespace CompletionActionInvoker
} // namespace app::classes::types
