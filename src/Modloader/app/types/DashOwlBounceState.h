#pragma once
#include <Modloader/app/structs/DashOwlBounceState.h>
#include <Modloader/app/structs/DashOwlBounceState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DashOwlBounceState {
        inline app::DashOwlBounceState__Class** type_info() {
            static app::DashOwlBounceState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DashOwlBounceState__Class**)(modloader::win::memory::resolve_rva(0x04723580));
            }
            return cache;
        }
        inline app::DashOwlBounceState__Class* get_class() {
            return il2cpp::get_class<app::DashOwlBounceState__Class>(type_info(), "", "DashOwlBounceState");
        }
        inline app::DashOwlBounceState* create() {
            return il2cpp::create_object<app::DashOwlBounceState>(get_class());
        }
    } // namespace DashOwlBounceState
} // namespace app::classes::types
