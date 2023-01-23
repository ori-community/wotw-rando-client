#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FloatConditionAndValue__Array__Class.h>
#include <Modloader/app/structs/FloatConditionAndValue__Array.h>

namespace app::classes::types {
    namespace FloatConditionAndValue__Array {
        namespace {
            inline app::FloatConditionAndValue__Array__Class* type_info_ref = nullptr;
        }
        inline app::FloatConditionAndValue__Array__Class** type_info = &type_info_ref;
        inline app::FloatConditionAndValue__Array__Class* get_class() {
            return il2cpp::get_class<app::FloatConditionAndValue__Array__Class>(type_info, "", "FloatConditionAndValue[]");
        }
        inline app::FloatConditionAndValue__Array* create() {
            return il2cpp::create_object<app::FloatConditionAndValue__Array>(get_class());
        }
    } // namespace FloatConditionAndValue__Array
} // namespace app::classes::types
