#pragma once
#include <Modloader/app/structs/CurrentSystemTimeZone.h>
#include <Modloader/app/structs/CurrentSystemTimeZone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CurrentSystemTimeZone {
        inline app::CurrentSystemTimeZone__Class** type_info() {
            static app::CurrentSystemTimeZone__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CurrentSystemTimeZone__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CurrentSystemTimeZone__Class* get_class() {
            return il2cpp::get_class<app::CurrentSystemTimeZone__Class>(type_info(), "System", "CurrentSystemTimeZone");
        }
        inline app::CurrentSystemTimeZone* create() {
            return il2cpp::create_object<app::CurrentSystemTimeZone>(get_class());
        }
    } // namespace CurrentSystemTimeZone
} // namespace app::classes::types
