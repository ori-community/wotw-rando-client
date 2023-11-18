#pragma once
#include <Modloader/app/structs/Trap.h>
#include <Modloader/app/structs/Trap__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Trap {
        inline app::Trap__Class** type_info() {
            static app::Trap__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Trap__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Trap__Class* get_class() {
            return il2cpp::get_class<app::Trap__Class>(type_info(), "", "Trap");
        }
        inline app::Trap* create() {
            return il2cpp::create_object<app::Trap>(get_class());
        }
    } // namespace Trap
} // namespace app::classes::types
