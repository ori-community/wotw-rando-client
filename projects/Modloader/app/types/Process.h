#pragma once
#include <Modloader/app/structs/Process.h>
#include <Modloader/app/structs/Process__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Process {
        inline app::Process__Class** type_info() {
            static app::Process__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Process__Class**)(modloader::win::memory::resolve_rva(0x04732290));
            }
            return cache;
        }
        inline app::Process__Class* get_class() {
            return il2cpp::get_class<app::Process__Class>(type_info(), "System.Diagnostics", "Process");
        }
        inline app::Process* create() {
            return il2cpp::create_object<app::Process>(get_class());
        }
    } // namespace Process
} // namespace app::classes::types
