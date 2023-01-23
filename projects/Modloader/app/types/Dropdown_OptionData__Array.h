#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Dropdown_OptionData__Array__Class.h>
#include <Modloader/app/structs/Dropdown_OptionData__Array.h>

namespace app::classes::types {
    namespace Dropdown_OptionData__Array {
        namespace {
            inline app::Dropdown_OptionData__Array__Class* type_info_ref = nullptr;
        }
        inline app::Dropdown_OptionData__Array__Class** type_info = &type_info_ref;
        inline app::Dropdown_OptionData__Array__Class* get_class() {
            return il2cpp::get_class<app::Dropdown_OptionData__Array__Class>(type_info, "UnityEngine.UI", "Dropdown+OptionData[]");
        }
        inline app::Dropdown_OptionData__Array* create() {
            return il2cpp::create_object<app::Dropdown_OptionData__Array>(get_class());
        }
    } // namespace Dropdown_OptionData__Array
} // namespace app::classes::types
