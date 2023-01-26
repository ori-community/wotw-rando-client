#pragma once
#include <Modloader/app/structs/DashOwlSpiritLeashedState.h>
#include <Modloader/app/structs/DashOwlSpiritLeashedState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DashOwlSpiritLeashedState {
        inline app::DashOwlSpiritLeashedState__Class** type_info() {
            static app::DashOwlSpiritLeashedState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DashOwlSpiritLeashedState__Class**)(modloader::win::memory::resolve_rva(0x04704B30));
            }
            return cache;
        }
        inline app::DashOwlSpiritLeashedState__Class* get_class() {
            return il2cpp::get_class<app::DashOwlSpiritLeashedState__Class>(type_info(), "", "DashOwlSpiritLeashedState");
        }
        inline app::DashOwlSpiritLeashedState* create() {
            return il2cpp::create_object<app::DashOwlSpiritLeashedState>(get_class());
        }
    } // namespace DashOwlSpiritLeashedState
} // namespace app::classes::types
