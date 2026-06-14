#pragma once
#include <Modloader/app/structs/Expression_SwitchCaseProxy.h>
#include <Modloader/app/structs/Expression_SwitchCaseProxy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Expression_SwitchCaseProxy {
        inline app::Expression_SwitchCaseProxy__Class** type_info() {
            static app::Expression_SwitchCaseProxy__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Expression_SwitchCaseProxy__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Expression_SwitchCaseProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::Expression_SwitchCaseProxy__Class>(type_info(), "System.Linq.Expressions", "Expression", "SwitchCaseProxy");
        }
        inline app::Expression_SwitchCaseProxy* create() {
            return il2cpp::create_object<app::Expression_SwitchCaseProxy>(get_class());
        }
    } // namespace Expression_SwitchCaseProxy
} // namespace app::classes::types
