#pragma once
#include <Modloader/app/structs/UberStateConditionWrapper.h>
#include <Modloader/app/structs/UberStateConditionWrapper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberStateConditionWrapper {
        inline app::UberStateConditionWrapper__Class** type_info() {
            static app::UberStateConditionWrapper__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberStateConditionWrapper__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberStateConditionWrapper__Class* get_class() {
            return il2cpp::get_class<app::UberStateConditionWrapper__Class>(type_info(), "", "UberStateConditionWrapper");
        }
        inline app::UberStateConditionWrapper* create() {
            return il2cpp::create_object<app::UberStateConditionWrapper>(get_class());
        }
    } // namespace UberStateConditionWrapper
} // namespace app::classes::types
