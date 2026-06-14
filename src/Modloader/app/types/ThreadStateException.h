#pragma once
#include <Modloader/app/structs/ThreadStateException.h>
#include <Modloader/app/structs/ThreadStateException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ThreadStateException {
        inline app::ThreadStateException__Class** type_info() {
            static app::ThreadStateException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ThreadStateException__Class**)(modloader::win::memory::resolve_rva(0x0475A5F8));
            }
            return cache;
        }
        inline app::ThreadStateException__Class* get_class() {
            return il2cpp::get_class<app::ThreadStateException__Class>(type_info(), "System.Threading", "ThreadStateException");
        }
        inline app::ThreadStateException* create() {
            return il2cpp::create_object<app::ThreadStateException>(get_class());
        }
    } // namespace ThreadStateException
} // namespace app::classes::types
