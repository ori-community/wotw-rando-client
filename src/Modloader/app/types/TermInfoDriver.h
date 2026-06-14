#pragma once
#include <Modloader/app/structs/TermInfoDriver.h>
#include <Modloader/app/structs/TermInfoDriver__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TermInfoDriver {
        inline app::TermInfoDriver__Class** type_info() {
            static app::TermInfoDriver__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TermInfoDriver__Class**)(modloader::win::memory::resolve_rva(0x04758F30));
            }
            return cache;
        }
        inline app::TermInfoDriver__Class* get_class() {
            return il2cpp::get_class<app::TermInfoDriver__Class>(type_info(), "System", "TermInfoDriver");
        }
        inline app::TermInfoDriver* create() {
            return il2cpp::create_object<app::TermInfoDriver>(get_class());
        }
    } // namespace TermInfoDriver
} // namespace app::classes::types
