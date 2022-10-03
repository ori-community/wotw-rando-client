#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonTrailUpdateContext__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonTrailUpdateContext__Array__Class** type_info;
        inline app::MoonTrailUpdateContext__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonTrailUpdateContext__Array__Class>(type_info, "Moon", "MoonTrailUpdateContext[]");
        }
        inline app::MoonTrailUpdateContext__Array* create() {
            return il2cpp::create_object<app::MoonTrailUpdateContext__Array>(get_class());
        }
    } // namespace MoonTrailUpdateContext__Array
} // namespace app::classes::types
