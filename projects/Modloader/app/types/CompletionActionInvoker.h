#pragma once
#include <Modloader/app/structs/CompletionActionInvoker.h>
#include <Modloader/app/structs/CompletionActionInvoker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CompletionActionInvoker {
        inline app::CompletionActionInvoker__Class** type_info() {
            static app::CompletionActionInvoker__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CompletionActionInvoker__Class**)(modloader::win::memory::resolve_rva(0x04700ED8));
            }
            return cache;
        }
        inline app::CompletionActionInvoker__Class* get_class() {
            return il2cpp::get_class<app::CompletionActionInvoker__Class>(type_info(), "System.Threading.Tasks", "CompletionActionInvoker");
        }
        inline app::CompletionActionInvoker* create() {
            return il2cpp::create_object<app::CompletionActionInvoker>(get_class());
        }
    } // namespace CompletionActionInvoker
} // namespace app::classes::types
