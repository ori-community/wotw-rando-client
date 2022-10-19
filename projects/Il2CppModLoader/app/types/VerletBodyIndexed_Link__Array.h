#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace VerletBodyIndexed_Link__Array {
        inline app::VerletBodyIndexed_Link__Array__Class** type_info = (app::VerletBodyIndexed_Link__Array__Class**)(modloader::win::memory::resolve_rva(0x0476DFC0));
        inline app::VerletBodyIndexed_Link__Array__Class* get_class() {
            return il2cpp::get_class<app::VerletBodyIndexed_Link__Array__Class>(type_info, "Moon", "VerletBodyIndexed+Link[]");
        }
        inline app::VerletBodyIndexed_Link__Array* create() {
            return il2cpp::create_object<app::VerletBodyIndexed_Link__Array>(get_class());
        }
    } // namespace VerletBodyIndexed_Link__Array
} // namespace app::classes::types
