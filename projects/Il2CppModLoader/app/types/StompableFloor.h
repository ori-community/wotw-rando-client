#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StompableFloor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StompableFloor__Class** type_info;
        inline app::StompableFloor__Class* get_class() {
            return il2cpp::get_class<app::StompableFloor__Class>(type_info, "", "StompableFloor");
        }
        inline app::StompableFloor* create() {
            return il2cpp::create_object<app::StompableFloor>(get_class());
        }
    } // namespace StompableFloor
} // namespace app::classes::types
