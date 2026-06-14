#pragma once
#include <Modloader/app/structs/SaveSlotsUI_c_DisplayClass61_0.h>
#include <Modloader/app/structs/SaveSlotsUI_c_DisplayClass61_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SaveSlotsUI_c_DisplayClass61_0 {
        inline app::SaveSlotsUI_c_DisplayClass61_0__Class** type_info() {
            static app::SaveSlotsUI_c_DisplayClass61_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SaveSlotsUI_c_DisplayClass61_0__Class**)(modloader::win::memory::resolve_rva(0x04763D68));
            }
            return cache;
        }
        inline app::SaveSlotsUI_c_DisplayClass61_0__Class* get_class() {
            return il2cpp::get_nested_class<app::SaveSlotsUI_c_DisplayClass61_0__Class>(type_info(), "", "SaveSlotsUI", "<>c__DisplayClass61_0");
        }
        inline app::SaveSlotsUI_c_DisplayClass61_0* create() {
            return il2cpp::create_object<app::SaveSlotsUI_c_DisplayClass61_0>(get_class());
        }
    } // namespace SaveSlotsUI_c_DisplayClass61_0
} // namespace app::classes::types
