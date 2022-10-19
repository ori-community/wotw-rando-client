#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace VerletBodyIndexed {
        inline app::VerletBodyIndexed__Class** type_info = (app::VerletBodyIndexed__Class**)(modloader::win::memory::resolve_rva(0x0474D430));
        inline app::VerletBodyIndexed__Class* get_class() {
            return il2cpp::get_class<app::VerletBodyIndexed__Class>(type_info, "Moon", "VerletBodyIndexed");
        }
        inline app::VerletBodyIndexed* create() {
            return il2cpp::create_object<app::VerletBodyIndexed>(get_class());
        }
    } // namespace VerletBodyIndexed
} // namespace app::classes::types
