#pragma once
#include <Modloader/app/structs/ThreadStart.h>
#include <Modloader/app/structs/ThreadStart__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ThreadStart {
        inline app::ThreadStart__Class** type_info() {
            static app::ThreadStart__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ThreadStart__Class**)(modloader::win::memory::resolve_rva(0x04707530));
            }
            return cache;
        }
        inline app::ThreadStart__Class* get_class() {
            return il2cpp::get_class<app::ThreadStart__Class>(type_info(), "System.Threading", "ThreadStart");
        }
        inline app::ThreadStart* create() {
            return il2cpp::create_object<app::ThreadStart>(get_class());
        }
    } // namespace ThreadStart
} // namespace app::classes::types
