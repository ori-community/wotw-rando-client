#pragma once
#include <Modloader/app/structs/AwaitTaskContinuation.h>
#include <Modloader/app/structs/AwaitTaskContinuation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AwaitTaskContinuation {
        inline app::AwaitTaskContinuation__Class** type_info() {
            static app::AwaitTaskContinuation__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AwaitTaskContinuation__Class**)(modloader::win::memory::resolve_rva(0x0471CBE8));
            }
            return cache;
        }
        inline app::AwaitTaskContinuation__Class* get_class() {
            return il2cpp::get_class<app::AwaitTaskContinuation__Class>(type_info(), "System.Threading.Tasks", "AwaitTaskContinuation");
        }
        inline app::AwaitTaskContinuation* create() {
            return il2cpp::create_object<app::AwaitTaskContinuation>(get_class());
        }
    } // namespace AwaitTaskContinuation
} // namespace app::classes::types
