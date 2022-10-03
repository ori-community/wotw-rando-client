#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PositionTurbulence_GenericTurbulence {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PositionTurbulence_GenericTurbulence__Class** type_info;
        inline app::PositionTurbulence_GenericTurbulence__Class* get_class() {
            return il2cpp::get_nested_class<app::PositionTurbulence_GenericTurbulence__Class>(type_info, "", "PositionTurbulence", "GenericTurbulence");
        }
        inline app::PositionTurbulence_GenericTurbulence* create() {
            return il2cpp::create_object<app::PositionTurbulence_GenericTurbulence>(get_class());
        }
    } // namespace PositionTurbulence_GenericTurbulence
} // namespace app::classes::types
