#pragma once
#include <Modloader/app/structs/OriHintZone.h>
#include <Modloader/app/structs/OriHintZone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OriHintZone {
        inline app::OriHintZone__Class** type_info() {
            static app::OriHintZone__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OriHintZone__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OriHintZone__Class* get_class() {
            return il2cpp::get_class<app::OriHintZone__Class>(type_info(), "", "OriHintZone");
        }
        inline app::OriHintZone* create() {
            return il2cpp::create_object<app::OriHintZone>(get_class());
        }
    } // namespace OriHintZone
} // namespace app::classes::types
