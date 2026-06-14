#pragma once
#include <Modloader/app/structs/VisibleToOtherModulesAttribute.h>
#include <Modloader/app/structs/VisibleToOtherModulesAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VisibleToOtherModulesAttribute {
        inline app::VisibleToOtherModulesAttribute__Class** type_info() {
            static app::VisibleToOtherModulesAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VisibleToOtherModulesAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VisibleToOtherModulesAttribute__Class* get_class() {
            return il2cpp::get_class<app::VisibleToOtherModulesAttribute__Class>(type_info(), "UnityEngine.Bindings", "VisibleToOtherModulesAttribute");
        }
        inline app::VisibleToOtherModulesAttribute* create() {
            return il2cpp::create_object<app::VisibleToOtherModulesAttribute>(get_class());
        }
    } // namespace VisibleToOtherModulesAttribute
} // namespace app::classes::types
