#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinStandingOnEdge {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinStandingOnEdge__Class** type_info;
        inline app::SeinStandingOnEdge__Class* get_class() {
            return il2cpp::get_class<app::SeinStandingOnEdge__Class>(type_info, "", "SeinStandingOnEdge");
        }
        inline app::SeinStandingOnEdge* create() {
            return il2cpp::create_object<app::SeinStandingOnEdge>(get_class());
        }
    } // namespace SeinStandingOnEdge
} // namespace app::classes::types
