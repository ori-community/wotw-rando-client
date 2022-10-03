#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpringSeinTrigger {
        namespace {
            app::SpringSeinTrigger__Class* type_info_ref = nullptr;
        }
        app::SpringSeinTrigger__Class** type_info = &type_info_ref;
        inline app::SpringSeinTrigger__Class* get_class() {
            return il2cpp::get_class<app::SpringSeinTrigger__Class>(type_info, "", "SpringSeinTrigger");
        }
        inline app::SpringSeinTrigger* create() {
            return il2cpp::create_object<app::SpringSeinTrigger>(get_class());
        }
    } // namespace SpringSeinTrigger
} // namespace app::classes::types
