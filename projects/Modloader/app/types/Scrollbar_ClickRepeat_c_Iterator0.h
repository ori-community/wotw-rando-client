#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Scrollbar_ClickRepeat_c_Iterator0 {
        inline app::Scrollbar_ClickRepeat_c_Iterator0__Class** type_info = (app::Scrollbar_ClickRepeat_c_Iterator0__Class**)(modloader::win::memory::resolve_rva(0x04755EB0));
        inline app::Scrollbar_ClickRepeat_c_Iterator0__Class* get_class() {
            return il2cpp::get_nested_class<app::Scrollbar_ClickRepeat_c_Iterator0__Class>(type_info, "UnityEngine.UI", "Scrollbar", "<ClickRepeat>c__Iterator0");
        }
        inline app::Scrollbar_ClickRepeat_c_Iterator0* create() {
            return il2cpp::create_object<app::Scrollbar_ClickRepeat_c_Iterator0>(get_class());
        }
    } // namespace Scrollbar_ClickRepeat_c_Iterator0
} // namespace app::classes::types
