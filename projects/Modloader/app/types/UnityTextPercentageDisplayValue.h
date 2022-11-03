#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnityTextPercentageDisplayValue {
        namespace {
            inline app::UnityTextPercentageDisplayValue__Class* type_info_ref = nullptr;
        }
        inline app::UnityTextPercentageDisplayValue__Class** type_info = &type_info_ref;
        inline app::UnityTextPercentageDisplayValue__Class* get_class() {
            return il2cpp::get_class<app::UnityTextPercentageDisplayValue__Class>(type_info, "", "UnityTextPercentageDisplayValue");
        }
        inline app::UnityTextPercentageDisplayValue* create() {
            return il2cpp::create_object<app::UnityTextPercentageDisplayValue>(get_class());
        }
    } // namespace UnityTextPercentageDisplayValue
} // namespace app::classes::types
