#pragma once
#include <Modloader/app/structs/Phone_EnableDisplay_d_5.h>
#include <Modloader/app/structs/Phone_EnableDisplay_d_5__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Phone_EnableDisplay_d_5 {
        inline app::Phone_EnableDisplay_d_5__Class** type_info() {
            static app::Phone_EnableDisplay_d_5__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Phone_EnableDisplay_d_5__Class**)(modloader::win::memory::resolve_rva(0x04779940));
            }
            return cache;
        }
        inline app::Phone_EnableDisplay_d_5__Class* get_class() {
            return il2cpp::get_nested_class<app::Phone_EnableDisplay_d_5__Class>(type_info(), "RootMotion.Demos", "Phone", "<EnableDisplay>d__5");
        }
        inline app::Phone_EnableDisplay_d_5* create() {
            return il2cpp::create_object<app::Phone_EnableDisplay_d_5>(get_class());
        }
    } // namespace Phone_EnableDisplay_d_5
} // namespace app::classes::types
