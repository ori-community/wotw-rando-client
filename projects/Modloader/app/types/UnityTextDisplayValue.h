#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UnityTextDisplayValue__Class.h>
#include <Modloader/app/structs/UnityTextDisplayValue.h>

namespace app::classes::types {
    namespace UnityTextDisplayValue {
        namespace {
            inline app::UnityTextDisplayValue__Class* type_info_ref = nullptr;
        }
        inline app::UnityTextDisplayValue__Class** type_info = &type_info_ref;
        inline app::UnityTextDisplayValue__Class* get_class() {
            return il2cpp::get_class<app::UnityTextDisplayValue__Class>(type_info, "", "UnityTextDisplayValue");
        }
        inline app::UnityTextDisplayValue* create() {
            return il2cpp::create_object<app::UnityTextDisplayValue>(get_class());
        }
    } // namespace UnityTextDisplayValue
} // namespace app::classes::types
