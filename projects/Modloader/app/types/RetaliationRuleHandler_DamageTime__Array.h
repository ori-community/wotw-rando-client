#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RetaliationRuleHandler_DamageTime__Array__Class.h>
#include <Modloader/app/structs/RetaliationRuleHandler_DamageTime__Array.h>

namespace app::classes::types {
    namespace RetaliationRuleHandler_DamageTime__Array {
        namespace {
            inline app::RetaliationRuleHandler_DamageTime__Array__Class* type_info_ref = nullptr;
        }
        inline app::RetaliationRuleHandler_DamageTime__Array__Class** type_info = &type_info_ref;
        inline app::RetaliationRuleHandler_DamageTime__Array__Class* get_class() {
            return il2cpp::get_class<app::RetaliationRuleHandler_DamageTime__Array__Class>(type_info, "", "RetaliationRuleHandler+DamageTime[]");
        }
        inline app::RetaliationRuleHandler_DamageTime__Array* create() {
            return il2cpp::create_object<app::RetaliationRuleHandler_DamageTime__Array>(get_class());
        }
    } // namespace RetaliationRuleHandler_DamageTime__Array
} // namespace app::classes::types
