#pragma once
#include <Modloader/app/structs/SerStack.h>
#include <Modloader/app/structs/SerStack__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SerStack {
        inline app::SerStack__Class** type_info() {
            static app::SerStack__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SerStack__Class**)(modloader::win::memory::resolve_rva(0x0477BB10));
            }
            return cache;
        }
        inline app::SerStack__Class* get_class() {
            return il2cpp::get_class<app::SerStack__Class>(type_info(), "System.Runtime.Serialization.Formatters.Binary", "SerStack");
        }
        inline app::SerStack* create() {
            return il2cpp::create_object<app::SerStack>(get_class());
        }
    } // namespace SerStack
} // namespace app::classes::types
