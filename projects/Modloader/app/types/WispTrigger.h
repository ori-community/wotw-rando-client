#pragma once
#include <Modloader/app/structs/WispTrigger.h>
#include <Modloader/app/structs/WispTrigger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WispTrigger {
        inline app::WispTrigger__Class** type_info() {
            static app::WispTrigger__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WispTrigger__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WispTrigger__Class* get_class() {
            return il2cpp::get_class<app::WispTrigger__Class>(type_info(), "", "WispTrigger");
        }
        inline app::WispTrigger* create() {
            return il2cpp::create_object<app::WispTrigger>(get_class());
        }
    } // namespace WispTrigger
} // namespace app::classes::types
