#pragma once
#include <Modloader/app/structs/AtomicBoolean.h>
#include <Modloader/app/structs/AtomicBoolean__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AtomicBoolean {
        inline app::AtomicBoolean__Class** type_info() {
            static app::AtomicBoolean__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AtomicBoolean__Class**)(modloader::win::memory::resolve_rva(0x0471CF68));
            }
            return cache;
        }
        inline app::AtomicBoolean__Class* get_class() {
            return il2cpp::get_class<app::AtomicBoolean__Class>(type_info(), "System.Threading", "AtomicBoolean");
        }
        inline app::AtomicBoolean* create() {
            return il2cpp::create_object<app::AtomicBoolean>(get_class());
        }
    } // namespace AtomicBoolean
} // namespace app::classes::types
