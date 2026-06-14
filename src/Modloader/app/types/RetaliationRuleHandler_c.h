#pragma once
#include <Modloader/app/structs/RetaliationRuleHandler_c.h>
#include <Modloader/app/structs/RetaliationRuleHandler_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RetaliationRuleHandler_c {
        inline app::RetaliationRuleHandler_c__Class** type_info() {
            static app::RetaliationRuleHandler_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RetaliationRuleHandler_c__Class**)(modloader::win::memory::resolve_rva(0x0476D088));
            }
            return cache;
        }
        inline app::RetaliationRuleHandler_c__Class* get_class() {
            return il2cpp::get_nested_class<app::RetaliationRuleHandler_c__Class>(type_info(), "", "RetaliationRuleHandler", "<>c");
        }
        inline app::RetaliationRuleHandler_c* create() {
            return il2cpp::create_object<app::RetaliationRuleHandler_c>(get_class());
        }
    } // namespace RetaliationRuleHandler_c
} // namespace app::classes::types
