#pragma once
#include <Modloader/app/structs/BaseZone.h>
#include <Modloader/app/structs/BaseZone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BaseZone {
        inline app::BaseZone__Class** type_info() {
            static app::BaseZone__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BaseZone__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BaseZone__Class* get_class() {
            return il2cpp::get_class<app::BaseZone__Class>(type_info(), "", "BaseZone");
        }
        inline app::BaseZone* create() {
            return il2cpp::create_object<app::BaseZone>(get_class());
        }
    } // namespace BaseZone
} // namespace app::classes::types
