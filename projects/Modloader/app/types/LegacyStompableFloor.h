#pragma once
#include <Modloader/app/structs/LegacyStompableFloor.h>
#include <Modloader/app/structs/LegacyStompableFloor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyStompableFloor {
        inline app::LegacyStompableFloor__Class** type_info() {
            static app::LegacyStompableFloor__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyStompableFloor__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyStompableFloor__Class* get_class() {
            return il2cpp::get_class<app::LegacyStompableFloor__Class>(type_info(), "", "LegacyStompableFloor");
        }
        inline app::LegacyStompableFloor* create() {
            return il2cpp::create_object<app::LegacyStompableFloor>(get_class());
        }
    } // namespace LegacyStompableFloor
} // namespace app::classes::types
