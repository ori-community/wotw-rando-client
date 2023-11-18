#pragma once
#include <Modloader/app/structs/NearSeinTrigger.h>
#include <Modloader/app/structs/NearSeinTrigger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NearSeinTrigger {
        inline app::NearSeinTrigger__Class** type_info() {
            static app::NearSeinTrigger__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NearSeinTrigger__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NearSeinTrigger__Class* get_class() {
            return il2cpp::get_class<app::NearSeinTrigger__Class>(type_info(), "", "NearSeinTrigger");
        }
        inline app::NearSeinTrigger* create() {
            return il2cpp::create_object<app::NearSeinTrigger>(get_class());
        }
    } // namespace NearSeinTrigger
} // namespace app::classes::types
