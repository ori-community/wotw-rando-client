#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace VerletBody {
        inline app::VerletBody__Class** type_info = (app::VerletBody__Class**)(modloader::win::memory::resolve_rva(0x047383F0));
        inline app::VerletBody__Class* get_class() {
            return il2cpp::get_class<app::VerletBody__Class>(type_info, "Moon", "VerletBody");
        }
        inline app::VerletBody* create() {
            return il2cpp::create_object<app::VerletBody>(get_class());
        }
    } // namespace VerletBody
} // namespace app::classes::types
