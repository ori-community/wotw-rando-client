#pragma once
#include <Modloader/app/structs/TimedTrigger.h>
#include <Modloader/app/structs/TimedTrigger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimedTrigger {
        inline app::TimedTrigger__Class** type_info() {
            static app::TimedTrigger__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimedTrigger__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimedTrigger__Class* get_class() {
            return il2cpp::get_class<app::TimedTrigger__Class>(type_info(), "", "TimedTrigger");
        }
        inline app::TimedTrigger* create() {
            return il2cpp::create_object<app::TimedTrigger>(get_class());
        }
    } // namespace TimedTrigger
} // namespace app::classes::types
