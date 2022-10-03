#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GravityDirectionChangerZone {
        namespace {
            app::GravityDirectionChangerZone__Class* type_info_ref = nullptr;
        }
        app::GravityDirectionChangerZone__Class** type_info = &type_info_ref;
        inline app::GravityDirectionChangerZone__Class* get_class() {
            return il2cpp::get_class<app::GravityDirectionChangerZone__Class>(type_info, "", "GravityDirectionChangerZone");
        }
        inline app::GravityDirectionChangerZone* create() {
            return il2cpp::create_object<app::GravityDirectionChangerZone>(get_class());
        }
    } // namespace GravityDirectionChangerZone
} // namespace app::classes::types
