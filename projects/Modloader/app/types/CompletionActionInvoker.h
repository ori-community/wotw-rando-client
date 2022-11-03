#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CompletionActionInvoker {
        inline app::CompletionActionInvoker__Class** type_info = (app::CompletionActionInvoker__Class**)(modloader::win::memory::resolve_rva(0x04700ED8));
        inline app::CompletionActionInvoker__Class* get_class() {
            return il2cpp::get_class<app::CompletionActionInvoker__Class>(type_info, "System.Threading.Tasks", "CompletionActionInvoker");
        }
        inline app::CompletionActionInvoker* create() {
            return il2cpp::create_object<app::CompletionActionInvoker>(get_class());
        }
    } // namespace CompletionActionInvoker
} // namespace app::classes::types
