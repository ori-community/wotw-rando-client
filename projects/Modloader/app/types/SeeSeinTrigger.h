#pragma once
#include <Modloader/app/structs/SeeSeinTrigger.h>
#include <Modloader/app/structs/SeeSeinTrigger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeeSeinTrigger {
        inline app::SeeSeinTrigger__Class** type_info() {
            static app::SeeSeinTrigger__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeeSeinTrigger__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeeSeinTrigger__Class* get_class() {
            return il2cpp::get_class<app::SeeSeinTrigger__Class>(type_info(), "", "SeeSeinTrigger");
        }
        inline app::SeeSeinTrigger* create() {
            return il2cpp::create_object<app::SeeSeinTrigger>(get_class());
        }
    } // namespace SeeSeinTrigger
} // namespace app::classes::types
