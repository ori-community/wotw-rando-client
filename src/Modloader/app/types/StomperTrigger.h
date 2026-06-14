#pragma once
#include <Modloader/app/structs/StomperTrigger.h>
#include <Modloader/app/structs/StomperTrigger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StomperTrigger {
        inline app::StomperTrigger__Class** type_info() {
            static app::StomperTrigger__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StomperTrigger__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StomperTrigger__Class* get_class() {
            return il2cpp::get_class<app::StomperTrigger__Class>(type_info(), "", "StomperTrigger");
        }
        inline app::StomperTrigger* create() {
            return il2cpp::create_object<app::StomperTrigger>(get_class());
        }
    } // namespace StomperTrigger
} // namespace app::classes::types
