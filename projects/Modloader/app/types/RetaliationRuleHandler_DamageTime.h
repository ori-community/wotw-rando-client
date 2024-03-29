#pragma once
#include <Modloader/app/structs/RetaliationRuleHandler_DamageTime.h>
#include <Modloader/app/structs/RetaliationRuleHandler_DamageTime__Array.h>
#include <Modloader/app/structs/RetaliationRuleHandler_DamageTime__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RetaliationRuleHandler_DamageTime {
        inline app::RetaliationRuleHandler_DamageTime__Class** type_info() {
            static app::RetaliationRuleHandler_DamageTime__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RetaliationRuleHandler_DamageTime__Class**)(modloader::win::memory::resolve_rva(0x04743528));
            }
            return cache;
        }
        inline app::RetaliationRuleHandler_DamageTime__Class* get_class() {
            return il2cpp::get_nested_class<app::RetaliationRuleHandler_DamageTime__Class>(type_info(), "", "RetaliationRuleHandler", "DamageTime");
        }
        inline app::RetaliationRuleHandler_DamageTime* create() {
            return il2cpp::create_object<app::RetaliationRuleHandler_DamageTime>(get_class());
        }
        inline app::RetaliationRuleHandler_DamageTime__Array* create_array(int size) {
            return il2cpp::array_new<app::RetaliationRuleHandler_DamageTime__Array>(get_class(), size);
        }
        inline app::RetaliationRuleHandler_DamageTime__Array* create_array(const std::vector<app::RetaliationRuleHandler_DamageTime*>& items) {
            return il2cpp::array_new<app::RetaliationRuleHandler_DamageTime__Array>(get_class(), items);
        }
    } // namespace RetaliationRuleHandler_DamageTime
} // namespace app::classes::types
