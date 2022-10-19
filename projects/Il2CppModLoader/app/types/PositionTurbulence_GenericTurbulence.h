#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PositionTurbulence_GenericTurbulence {
        inline app::PositionTurbulence_GenericTurbulence__Class** type_info = (app::PositionTurbulence_GenericTurbulence__Class**)(modloader::win::memory::resolve_rva(0x04730200));
        inline app::PositionTurbulence_GenericTurbulence__Class* get_class() {
            return il2cpp::get_nested_class<app::PositionTurbulence_GenericTurbulence__Class>(type_info, "", "PositionTurbulence", "GenericTurbulence");
        }
        inline app::PositionTurbulence_GenericTurbulence* create() {
            return il2cpp::create_object<app::PositionTurbulence_GenericTurbulence>(get_class());
        }
    } // namespace PositionTurbulence_GenericTurbulence
} // namespace app::classes::types
