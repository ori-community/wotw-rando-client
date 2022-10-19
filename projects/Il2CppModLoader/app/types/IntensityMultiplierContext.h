#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IntensityMultiplierContext {
        inline app::IntensityMultiplierContext__Class** type_info = (app::IntensityMultiplierContext__Class**)(modloader::win::memory::resolve_rva(0x047941C0));
        inline app::IntensityMultiplierContext__Class* get_class() {
            return il2cpp::get_class<app::IntensityMultiplierContext__Class>(type_info, "Moon", "IntensityMultiplierContext");
        }
        inline app::IntensityMultiplierContext* create() {
            return il2cpp::create_object<app::IntensityMultiplierContext>(get_class());
        }
    } // namespace IntensityMultiplierContext
} // namespace app::classes::types
