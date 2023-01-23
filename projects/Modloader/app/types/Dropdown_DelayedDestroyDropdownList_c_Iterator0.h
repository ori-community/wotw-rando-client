#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Dropdown_DelayedDestroyDropdownList_c_Iterator0__Class.h>
#include <Modloader/app/structs/Dropdown_DelayedDestroyDropdownList_c_Iterator0.h>

namespace app::classes::types {
    namespace Dropdown_DelayedDestroyDropdownList_c_Iterator0 {
        inline app::Dropdown_DelayedDestroyDropdownList_c_Iterator0__Class** type_info = (app::Dropdown_DelayedDestroyDropdownList_c_Iterator0__Class**)(modloader::win::memory::resolve_rva(0x0477AF10));
        inline app::Dropdown_DelayedDestroyDropdownList_c_Iterator0__Class* get_class() {
            return il2cpp::get_nested_class<app::Dropdown_DelayedDestroyDropdownList_c_Iterator0__Class>(type_info, "UnityEngine.UI", "Dropdown", "<DelayedDestroyDropdownList>c__Iterator0");
        }
        inline app::Dropdown_DelayedDestroyDropdownList_c_Iterator0* create() {
            return il2cpp::create_object<app::Dropdown_DelayedDestroyDropdownList_c_Iterator0>(get_class());
        }
    } // namespace Dropdown_DelayedDestroyDropdownList_c_Iterator0
} // namespace app::classes::types
