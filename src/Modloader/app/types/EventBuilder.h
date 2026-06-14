#pragma once
#include <Modloader/app/structs/EventBuilder.h>
#include <Modloader/app/structs/EventBuilder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventBuilder {
        inline app::EventBuilder__Class** type_info() {
            static app::EventBuilder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EventBuilder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EventBuilder__Class* get_class() {
            return il2cpp::get_class<app::EventBuilder__Class>(type_info(), "System.Reflection.Emit", "EventBuilder");
        }
        inline app::EventBuilder* create() {
            return il2cpp::create_object<app::EventBuilder>(get_class());
        }
    } // namespace EventBuilder
} // namespace app::classes::types
