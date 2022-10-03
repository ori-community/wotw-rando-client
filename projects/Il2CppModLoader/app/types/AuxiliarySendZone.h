#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AuxiliarySendZone {
        namespace {
            app::AuxiliarySendZone__Class* type_info_ref = nullptr;
        }
        app::AuxiliarySendZone__Class** type_info = &type_info_ref;
        inline app::AuxiliarySendZone__Class* get_class() {
            return il2cpp::get_class<app::AuxiliarySendZone__Class>(type_info, "", "AuxiliarySendZone");
        }
        inline app::AuxiliarySendZone* create() {
            return il2cpp::create_object<app::AuxiliarySendZone>(get_class());
        }
    } // namespace AuxiliarySendZone
} // namespace app::classes::types
