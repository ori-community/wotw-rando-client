#pragma once
#include <Modloader/app/structs/Console.h>
#include <Modloader/app/structs/Console__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Console {
        inline app::Console__Class** type_info() {
            static app::Console__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Console__Class**)(modloader::win::memory::resolve_rva(0x04747638));
            }
            return cache;
        }
        inline app::Console__Class* get_class() {
            return il2cpp::get_class<app::Console__Class>(type_info(), "System", "Console");
        }
        inline app::Console* create() {
            return il2cpp::create_object<app::Console>(get_class());
        }
    } // namespace Console
} // namespace app::classes::types
