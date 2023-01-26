#pragma once
#include <Modloader/app/structs/WindPipeZone.h>
#include <Modloader/app/structs/WindPipeZone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WindPipeZone {
        inline app::WindPipeZone__Class** type_info() {
            static app::WindPipeZone__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WindPipeZone__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WindPipeZone__Class* get_class() {
            return il2cpp::get_class<app::WindPipeZone__Class>(type_info(), "", "WindPipeZone");
        }
        inline app::WindPipeZone* create() {
            return il2cpp::create_object<app::WindPipeZone>(get_class());
        }
    } // namespace WindPipeZone
} // namespace app::classes::types
