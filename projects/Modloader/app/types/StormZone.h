#pragma once
#include <Modloader/app/structs/StormZone.h>
#include <Modloader/app/structs/StormZone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StormZone {
        inline app::StormZone__Class** type_info() {
            static app::StormZone__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StormZone__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StormZone__Class* get_class() {
            return il2cpp::get_class<app::StormZone__Class>(type_info(), "", "StormZone");
        }
        inline app::StormZone* create() {
            return il2cpp::create_object<app::StormZone>(get_class());
        }
    } // namespace StormZone
} // namespace app::classes::types
