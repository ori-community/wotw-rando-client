#pragma once
#include <Modloader/app/structs/RetaliationRuleHandler.h>
#include <Modloader/app/structs/RetaliationRuleHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RetaliationRuleHandler {
        inline app::RetaliationRuleHandler__Class** type_info() {
            static app::RetaliationRuleHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RetaliationRuleHandler__Class**)(modloader::win::memory::resolve_rva(0x04772A08));
            }
            return cache;
        }
        inline app::RetaliationRuleHandler__Class* get_class() {
            return il2cpp::get_class<app::RetaliationRuleHandler__Class>(type_info(), "", "RetaliationRuleHandler");
        }
        inline app::RetaliationRuleHandler* create() {
            return il2cpp::create_object<app::RetaliationRuleHandler>(get_class());
        }
    } // namespace RetaliationRuleHandler
} // namespace app::classes::types
