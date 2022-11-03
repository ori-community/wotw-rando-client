#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SaveSlotsUI_c_DisplayClass76_0 {
        inline app::SaveSlotsUI_c_DisplayClass76_0__Class** type_info = (app::SaveSlotsUI_c_DisplayClass76_0__Class**)(modloader::win::memory::resolve_rva(0x047757D8));
        inline app::SaveSlotsUI_c_DisplayClass76_0__Class* get_class() {
            return il2cpp::get_nested_class<app::SaveSlotsUI_c_DisplayClass76_0__Class>(type_info, "", "SaveSlotsUI", "<>c__DisplayClass76_0");
        }
        inline app::SaveSlotsUI_c_DisplayClass76_0* create() {
            return il2cpp::create_object<app::SaveSlotsUI_c_DisplayClass76_0>(get_class());
        }
    } // namespace SaveSlotsUI_c_DisplayClass76_0
} // namespace app::classes::types
