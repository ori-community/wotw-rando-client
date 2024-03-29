#pragma once
#include <Modloader/app/structs/MissingMethodException.h>
#include <Modloader/app/structs/MissingMethodException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MissingMethodException {
        inline app::MissingMethodException__Class** type_info() {
            static app::MissingMethodException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MissingMethodException__Class**)(modloader::win::memory::resolve_rva(0x0475E250));
            }
            return cache;
        }
        inline app::MissingMethodException__Class* get_class() {
            return il2cpp::get_class<app::MissingMethodException__Class>(type_info(), "System", "MissingMethodException");
        }
        inline app::MissingMethodException* create() {
            return il2cpp::create_object<app::MissingMethodException>(get_class());
        }
    } // namespace MissingMethodException
} // namespace app::classes::types
