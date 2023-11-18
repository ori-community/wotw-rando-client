#pragma once
#include <Modloader/app/structs/TooltipAttribute.h>
#include <Modloader/app/structs/TooltipAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TooltipAttribute {
        inline app::TooltipAttribute__Class** type_info() {
            static app::TooltipAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TooltipAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TooltipAttribute__Class* get_class() {
            return il2cpp::get_class<app::TooltipAttribute__Class>(type_info(), "UnityEngine", "TooltipAttribute");
        }
        inline app::TooltipAttribute* create() {
            return il2cpp::create_object<app::TooltipAttribute>(get_class());
        }
    } // namespace TooltipAttribute
} // namespace app::classes::types
