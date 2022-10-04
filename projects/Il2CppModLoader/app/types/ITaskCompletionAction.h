#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ITaskCompletionAction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ITaskCompletionAction__Class** type_info;
        inline app::ITaskCompletionAction__Class* get_class() {
            return il2cpp::get_class<app::ITaskCompletionAction__Class>(type_info, "System.Threading.Tasks", "ITaskCompletionAction");
        }
    } // namespace ITaskCompletionAction
} // namespace app::classes::types
