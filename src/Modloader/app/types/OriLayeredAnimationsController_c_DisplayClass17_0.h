#pragma once
#include <Modloader/app/structs/OriLayeredAnimationsController_c_DisplayClass17_0.h>
#include <Modloader/app/structs/OriLayeredAnimationsController_c_DisplayClass17_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OriLayeredAnimationsController_c_DisplayClass17_0 {
        inline app::OriLayeredAnimationsController_c_DisplayClass17_0__Class** type_info() {
            static app::OriLayeredAnimationsController_c_DisplayClass17_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OriLayeredAnimationsController_c_DisplayClass17_0__Class**)(modloader::win::memory::resolve_rva(0x0473C4B8));
            }
            return cache;
        }
        inline app::OriLayeredAnimationsController_c_DisplayClass17_0__Class* get_class() {
            return il2cpp::get_nested_class<app::OriLayeredAnimationsController_c_DisplayClass17_0__Class>(type_info(), "", "OriLayeredAnimationsController", "<>c__DisplayClass17_0");
        }
        inline app::OriLayeredAnimationsController_c_DisplayClass17_0* create() {
            return il2cpp::create_object<app::OriLayeredAnimationsController_c_DisplayClass17_0>(get_class());
        }
    } // namespace OriLayeredAnimationsController_c_DisplayClass17_0
} // namespace app::classes::types
