#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HAuthTicket {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HAuthTicket__Class** type_info;
        inline app::HAuthTicket__Class* get_class() {
            return il2cpp::get_class<app::HAuthTicket__Class>(type_info, "Steamworks", "HAuthTicket");
        }
        inline app::HAuthTicket* create() {
            return il2cpp::create_object<app::HAuthTicket>(get_class());
        }
        inline app::HAuthTicket__Boxed* box(app::HAuthTicket value) {
            return il2cpp::box_value<app::HAuthTicket__Boxed>(get_class(), value);
        }
    } // namespace HAuthTicket
} // namespace app::classes::types
