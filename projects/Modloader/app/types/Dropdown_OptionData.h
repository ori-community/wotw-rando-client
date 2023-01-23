#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Dropdown_OptionData__Class.h>
#include <Modloader/app/structs/Dropdown_OptionData.h>
#include <Modloader/app/structs/Dropdown_OptionData__Array.h>

namespace app::classes::types {
    namespace Dropdown_OptionData {
        inline app::Dropdown_OptionData__Class** type_info = (app::Dropdown_OptionData__Class**)(modloader::win::memory::resolve_rva(0x04731DA8));
        inline app::Dropdown_OptionData__Class* get_class() {
            return il2cpp::get_nested_class<app::Dropdown_OptionData__Class>(type_info, "UnityEngine.UI", "Dropdown", "OptionData");
        }
        inline app::Dropdown_OptionData* create() {
            return il2cpp::create_object<app::Dropdown_OptionData>(get_class());
        }
        inline app::Dropdown_OptionData__Array* create_array(int size) {
            return il2cpp::array_new<app::Dropdown_OptionData__Array>(get_class(), size);
        }
        inline app::Dropdown_OptionData__Array* create_array(const std::vector<app::Dropdown_OptionData*>& items) {
            return il2cpp::array_new<app::Dropdown_OptionData__Array>(get_class(), items);
        }
    } // namespace Dropdown_OptionData
} // namespace app::classes::types
