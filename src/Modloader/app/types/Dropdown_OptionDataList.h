#pragma once
#include <Modloader/app/structs/Dropdown_OptionDataList.h>
#include <Modloader/app/structs/Dropdown_OptionDataList__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Dropdown_OptionDataList {
        inline app::Dropdown_OptionDataList__Class** type_info() {
            static app::Dropdown_OptionDataList__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Dropdown_OptionDataList__Class**)(modloader::win::memory::resolve_rva(0x047907D0));
            }
            return cache;
        }
        inline app::Dropdown_OptionDataList__Class* get_class() {
            return il2cpp::get_nested_class<app::Dropdown_OptionDataList__Class>(type_info(), "UnityEngine.UI", "Dropdown", "OptionDataList");
        }
        inline app::Dropdown_OptionDataList* create() {
            return il2cpp::create_object<app::Dropdown_OptionDataList>(get_class());
        }
    } // namespace Dropdown_OptionDataList
} // namespace app::classes::types
