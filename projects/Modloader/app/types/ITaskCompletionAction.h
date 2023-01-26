#pragma once
#include <Modloader/app/structs/ITaskCompletionAction.h>
#include <Modloader/app/structs/ITaskCompletionAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ITaskCompletionAction {
        inline app::ITaskCompletionAction__Class** type_info() {
            static app::ITaskCompletionAction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ITaskCompletionAction__Class**)(modloader::win::memory::resolve_rva(0x0470E8D8));
            }
            return cache;
        }
        inline app::ITaskCompletionAction__Class* get_class() {
            return il2cpp::get_class<app::ITaskCompletionAction__Class>(type_info(), "System.Threading.Tasks", "ITaskCompletionAction");
        }
    } // namespace ITaskCompletionAction
} // namespace app::classes::types
