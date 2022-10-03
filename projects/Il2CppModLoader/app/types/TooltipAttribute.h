#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TooltipAttribute {
        namespace {
            app::TooltipAttribute__Class* type_info_ref = nullptr;
        }
        app::TooltipAttribute__Class** type_info = &type_info_ref;
        inline app::TooltipAttribute__Class* get_class() {
            return il2cpp::get_class<app::TooltipAttribute__Class>(type_info, "UnityEngine", "TooltipAttribute");
        }
        inline app::TooltipAttribute* create() {
            return il2cpp::create_object<app::TooltipAttribute>(get_class());
        }
    } // namespace TooltipAttribute
} // namespace app::classes::types
