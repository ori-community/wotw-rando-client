#pragma once
#include <Modloader/app/structs/ThreadAbortException.h>
#include <Modloader/app/structs/ThreadAbortException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ThreadAbortException {
        inline app::ThreadAbortException__Class** type_info() {
            static app::ThreadAbortException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ThreadAbortException__Class**)(modloader::win::memory::resolve_rva(0x0473D0D0));
            }
            return cache;
        }
        inline app::ThreadAbortException__Class* get_class() {
            return il2cpp::get_class<app::ThreadAbortException__Class>(type_info(), "System.Threading", "ThreadAbortException");
        }
        inline app::ThreadAbortException* create() {
            return il2cpp::create_object<app::ThreadAbortException>(get_class());
        }
    } // namespace ThreadAbortException
} // namespace app::classes::types
