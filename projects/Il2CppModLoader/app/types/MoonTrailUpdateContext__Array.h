#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonTrailUpdateContext__Array {
        inline app::MoonTrailUpdateContext__Array__Class** type_info = (app::MoonTrailUpdateContext__Array__Class**)(modloader::win::memory::resolve_rva(0x047897D0));
        inline app::MoonTrailUpdateContext__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonTrailUpdateContext__Array__Class>(type_info, "Moon", "MoonTrailUpdateContext[]");
        }
        inline app::MoonTrailUpdateContext__Array* create() {
            return il2cpp::create_object<app::MoonTrailUpdateContext__Array>(get_class());
        }
    } // namespace MoonTrailUpdateContext__Array
} // namespace app::classes::types
