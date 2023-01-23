#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ValueWithMaxValue__Class.h>
#include <Modloader/app/structs/ValueWithMaxValue.h>

namespace app::classes::types {
    namespace ValueWithMaxValue {
        namespace {
            inline app::ValueWithMaxValue__Class* type_info_ref = nullptr;
        }
        inline app::ValueWithMaxValue__Class** type_info = &type_info_ref;
        inline app::ValueWithMaxValue__Class* get_class() {
            return il2cpp::get_class<app::ValueWithMaxValue__Class>(type_info, "", "ValueWithMaxValue");
        }
        inline app::ValueWithMaxValue* create() {
            return il2cpp::create_object<app::ValueWithMaxValue>(get_class());
        }
    } // namespace ValueWithMaxValue
} // namespace app::classes::types
