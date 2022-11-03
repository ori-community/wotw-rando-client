#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GravityDirectionChangerZone {
        namespace {
            inline app::GravityDirectionChangerZone__Class* type_info_ref = nullptr;
        }
        inline app::GravityDirectionChangerZone__Class** type_info = &type_info_ref;
        inline app::GravityDirectionChangerZone__Class* get_class() {
            return il2cpp::get_class<app::GravityDirectionChangerZone__Class>(type_info, "", "GravityDirectionChangerZone");
        }
        inline app::GravityDirectionChangerZone* create() {
            return il2cpp::create_object<app::GravityDirectionChangerZone>(get_class());
        }
    } // namespace GravityDirectionChangerZone
} // namespace app::classes::types
