#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UnityTextStringDisplayValue__Class.h>
#include <Modloader/app/structs/UnityTextStringDisplayValue.h>

namespace app::classes::types {
    namespace UnityTextStringDisplayValue {
        namespace {
            inline app::UnityTextStringDisplayValue__Class* type_info_ref = nullptr;
        }
        inline app::UnityTextStringDisplayValue__Class** type_info = &type_info_ref;
        inline app::UnityTextStringDisplayValue__Class* get_class() {
            return il2cpp::get_class<app::UnityTextStringDisplayValue__Class>(type_info, "", "UnityTextStringDisplayValue");
        }
        inline app::UnityTextStringDisplayValue* create() {
            return il2cpp::create_object<app::UnityTextStringDisplayValue>(get_class());
        }
    } // namespace UnityTextStringDisplayValue
} // namespace app::classes::types
