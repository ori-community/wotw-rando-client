#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Dropdown_OptionDataList {
        inline app::Dropdown_OptionDataList__Class** type_info = (app::Dropdown_OptionDataList__Class**)(modloader::win::memory::resolve_rva(0x047907D0));
        inline app::Dropdown_OptionDataList__Class* get_class() {
            return il2cpp::get_nested_class<app::Dropdown_OptionDataList__Class>(type_info, "UnityEngine.UI", "Dropdown", "OptionDataList");
        }
        inline app::Dropdown_OptionDataList* create() {
            return il2cpp::create_object<app::Dropdown_OptionDataList>(get_class());
        }
    } // namespace Dropdown_OptionDataList
} // namespace app::classes::types
