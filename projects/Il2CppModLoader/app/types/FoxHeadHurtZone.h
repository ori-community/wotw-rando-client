#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FoxHeadHurtZone {
        namespace {
            app::FoxHeadHurtZone__Class* type_info_ref = nullptr;
        }
        app::FoxHeadHurtZone__Class** type_info = &type_info_ref;
        inline app::FoxHeadHurtZone__Class* get_class() {
            return il2cpp::get_class<app::FoxHeadHurtZone__Class>(type_info, "", "FoxHeadHurtZone");
        }
        inline app::FoxHeadHurtZone* create() {
            return il2cpp::create_object<app::FoxHeadHurtZone>(get_class());
        }
    } // namespace FoxHeadHurtZone
} // namespace app::classes::types
