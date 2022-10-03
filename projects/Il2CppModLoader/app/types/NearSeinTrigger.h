#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NearSeinTrigger {
        namespace {
            app::NearSeinTrigger__Class* type_info_ref = nullptr;
        }
        app::NearSeinTrigger__Class** type_info = &type_info_ref;
        inline app::NearSeinTrigger__Class* get_class() {
            return il2cpp::get_class<app::NearSeinTrigger__Class>(type_info, "", "NearSeinTrigger");
        }
        inline app::NearSeinTrigger* create() {
            return il2cpp::create_object<app::NearSeinTrigger>(get_class());
        }
    } // namespace NearSeinTrigger
} // namespace app::classes::types
