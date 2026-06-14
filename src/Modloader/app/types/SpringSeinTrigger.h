#pragma once
#include <Modloader/app/structs/SpringSeinTrigger.h>
#include <Modloader/app/structs/SpringSeinTrigger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpringSeinTrigger {
        inline app::SpringSeinTrigger__Class** type_info() {
            static app::SpringSeinTrigger__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpringSeinTrigger__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpringSeinTrigger__Class* get_class() {
            return il2cpp::get_class<app::SpringSeinTrigger__Class>(type_info(), "", "SpringSeinTrigger");
        }
        inline app::SpringSeinTrigger* create() {
            return il2cpp::create_object<app::SpringSeinTrigger>(get_class());
        }
    } // namespace SpringSeinTrigger
} // namespace app::classes::types
