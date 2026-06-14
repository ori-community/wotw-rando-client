#pragma once
#include <Modloader/app/structs/DashOwlBashedState.h>
#include <Modloader/app/structs/DashOwlBashedState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DashOwlBashedState {
        inline app::DashOwlBashedState__Class** type_info() {
            static app::DashOwlBashedState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DashOwlBashedState__Class**)(modloader::win::memory::resolve_rva(0x0474EEE0));
            }
            return cache;
        }
        inline app::DashOwlBashedState__Class* get_class() {
            return il2cpp::get_class<app::DashOwlBashedState__Class>(type_info(), "", "DashOwlBashedState");
        }
        inline app::DashOwlBashedState* create() {
            return il2cpp::create_object<app::DashOwlBashedState>(get_class());
        }
    } // namespace DashOwlBashedState
} // namespace app::classes::types
