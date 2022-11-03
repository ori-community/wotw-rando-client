#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ControlItem_c {
        inline app::ControlItem_c__Class** type_info = (app::ControlItem_c__Class**)(modloader::win::memory::resolve_rva(0x047832F8));
        inline app::ControlItem_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ControlItem_c__Class>(type_info, "", "ControlItem", "<>c");
        }
        inline app::ControlItem_c* create() {
            return il2cpp::create_object<app::ControlItem_c>(get_class());
        }
    } // namespace ControlItem_c
} // namespace app::classes::types
