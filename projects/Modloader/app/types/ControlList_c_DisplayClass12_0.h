#pragma once
#include <Modloader/app/structs/ControlList_c_DisplayClass12_0.h>
#include <Modloader/app/structs/ControlList_c_DisplayClass12_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ControlList_c_DisplayClass12_0 {
        inline app::ControlList_c_DisplayClass12_0__Class** type_info() {
            static app::ControlList_c_DisplayClass12_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ControlList_c_DisplayClass12_0__Class**)(modloader::win::memory::resolve_rva(0x04775A20));
            }
            return cache;
        }
        inline app::ControlList_c_DisplayClass12_0__Class* get_class() {
            return il2cpp::get_nested_class<app::ControlList_c_DisplayClass12_0__Class>(type_info(), "", "ControlList", "<>c__DisplayClass12_0");
        }
        inline app::ControlList_c_DisplayClass12_0* create() {
            return il2cpp::create_object<app::ControlList_c_DisplayClass12_0>(get_class());
        }
    } // namespace ControlList_c_DisplayClass12_0
} // namespace app::classes::types
