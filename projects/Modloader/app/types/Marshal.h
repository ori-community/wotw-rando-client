#pragma once
#include <Modloader/app/structs/Marshal.h>
#include <Modloader/app/structs/Marshal__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Marshal {
        inline app::Marshal__Class** type_info() {
            static app::Marshal__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Marshal__Class**)(modloader::win::memory::resolve_rva(0x047428E0));
            }
            return cache;
        }
        inline app::Marshal__Class* get_class() {
            return il2cpp::get_class<app::Marshal__Class>(type_info(), "System.Runtime.InteropServices", "Marshal");
        }
        inline app::Marshal* create() {
            return il2cpp::create_object<app::Marshal>(get_class());
        }
    } // namespace Marshal
} // namespace app::classes::types
