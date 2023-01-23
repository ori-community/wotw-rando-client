#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FloatValueWithCondition__Class.h>
#include <Modloader/app/structs/FloatValueWithCondition.h>

namespace app::classes::types {
    namespace FloatValueWithCondition {
        namespace {
            inline app::FloatValueWithCondition__Class* type_info_ref = nullptr;
        }
        inline app::FloatValueWithCondition__Class** type_info = &type_info_ref;
        inline app::FloatValueWithCondition__Class* get_class() {
            return il2cpp::get_class<app::FloatValueWithCondition__Class>(type_info, "", "FloatValueWithCondition");
        }
        inline app::FloatValueWithCondition* create() {
            return il2cpp::create_object<app::FloatValueWithCondition>(get_class());
        }
    } // namespace FloatValueWithCondition
} // namespace app::classes::types
