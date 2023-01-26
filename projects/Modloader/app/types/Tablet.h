#pragma once
#include <Modloader/app/structs/Tablet.h>
#include <Modloader/app/structs/Tablet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Tablet {
        inline app::Tablet__Class** type_info() {
            static app::Tablet__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Tablet__Class**)(modloader::win::memory::resolve_rva(0x0477BE40));
            }
            return cache;
        }
        inline app::Tablet__Class* get_class() {
            return il2cpp::get_class<app::Tablet__Class>(type_info(), "uWintab", "Tablet");
        }
        inline app::Tablet* create() {
            return il2cpp::create_object<app::Tablet>(get_class());
        }
    } // namespace Tablet
} // namespace app::classes::types
