#pragma once
#include <Modloader/app/structs/MessageZoneB.h>
#include <Modloader/app/structs/MessageZoneB__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MessageZoneB {
        inline app::MessageZoneB__Class** type_info() {
            static app::MessageZoneB__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MessageZoneB__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MessageZoneB__Class* get_class() {
            return il2cpp::get_class<app::MessageZoneB__Class>(type_info(), "", "MessageZoneB");
        }
        inline app::MessageZoneB* create() {
            return il2cpp::create_object<app::MessageZoneB>(get_class());
        }
    } // namespace MessageZoneB
} // namespace app::classes::types
