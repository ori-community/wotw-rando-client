#pragma once
#include <Modloader/app/structs/ControlItem_c.h>
#include <Modloader/app/structs/ControlItem_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ControlItem_c {
        inline app::ControlItem_c__Class** type_info() {
            static app::ControlItem_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ControlItem_c__Class**)(modloader::win::memory::resolve_rva(0x047832F8));
            }
            return cache;
        }
        inline app::ControlItem_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ControlItem_c__Class>(type_info(), "", "ControlItem", "<>c");
        }
        inline app::ControlItem_c* create() {
            return il2cpp::create_object<app::ControlItem_c>(get_class());
        }
    } // namespace ControlItem_c
} // namespace app::classes::types
