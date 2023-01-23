#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ITaskCompletionAction__Class.h>

namespace app::classes::types {
    namespace ITaskCompletionAction {
        inline app::ITaskCompletionAction__Class** type_info = (app::ITaskCompletionAction__Class**)(modloader::win::memory::resolve_rva(0x0470E8D8));
        inline app::ITaskCompletionAction__Class* get_class() {
            return il2cpp::get_class<app::ITaskCompletionAction__Class>(type_info, "System.Threading.Tasks", "ITaskCompletionAction");
        }
    } // namespace ITaskCompletionAction
} // namespace app::classes::types
