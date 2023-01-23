#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberStateConditionDrawerAttribute__Class.h>
#include <Modloader/app/structs/UberStateConditionDrawerAttribute.h>

namespace app::classes::types {
    namespace UberStateConditionDrawerAttribute {
        namespace {
            inline app::UberStateConditionDrawerAttribute__Class* type_info_ref = nullptr;
        }
        inline app::UberStateConditionDrawerAttribute__Class** type_info = &type_info_ref;
        inline app::UberStateConditionDrawerAttribute__Class* get_class() {
            return il2cpp::get_class<app::UberStateConditionDrawerAttribute__Class>(type_info, "", "UberStateConditionDrawerAttribute");
        }
        inline app::UberStateConditionDrawerAttribute* create() {
            return il2cpp::create_object<app::UberStateConditionDrawerAttribute>(get_class());
        }
    } // namespace UberStateConditionDrawerAttribute
} // namespace app::classes::types
