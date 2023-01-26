#pragma once
#include <Modloader/app/structs/GravityDirectionChangerZone.h>
#include <Modloader/app/structs/GravityDirectionChangerZone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GravityDirectionChangerZone {
        inline app::GravityDirectionChangerZone__Class** type_info() {
            static app::GravityDirectionChangerZone__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GravityDirectionChangerZone__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GravityDirectionChangerZone__Class* get_class() {
            return il2cpp::get_class<app::GravityDirectionChangerZone__Class>(type_info(), "", "GravityDirectionChangerZone");
        }
        inline app::GravityDirectionChangerZone* create() {
            return il2cpp::create_object<app::GravityDirectionChangerZone>(get_class());
        }
    } // namespace GravityDirectionChangerZone
} // namespace app::classes::types
