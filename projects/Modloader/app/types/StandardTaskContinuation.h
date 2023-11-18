#pragma once
#include <Modloader/app/structs/StandardTaskContinuation.h>
#include <Modloader/app/structs/StandardTaskContinuation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StandardTaskContinuation {
        inline app::StandardTaskContinuation__Class** type_info() {
            static app::StandardTaskContinuation__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StandardTaskContinuation__Class**)(modloader::win::memory::resolve_rva(0x04762370));
            }
            return cache;
        }
        inline app::StandardTaskContinuation__Class* get_class() {
            return il2cpp::get_class<app::StandardTaskContinuation__Class>(type_info(), "System.Threading.Tasks", "StandardTaskContinuation");
        }
        inline app::StandardTaskContinuation* create() {
            return il2cpp::create_object<app::StandardTaskContinuation>(get_class());
        }
    } // namespace StandardTaskContinuation
} // namespace app::classes::types
