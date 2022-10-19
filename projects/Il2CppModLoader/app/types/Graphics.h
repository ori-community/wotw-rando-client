#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Graphics {
        inline app::Graphics__Class** type_info = (app::Graphics__Class**)(modloader::win::memory::resolve_rva(0x04761928));
        inline app::Graphics__Class* get_class() {
            return il2cpp::get_class<app::Graphics__Class>(type_info, "UnityEngine", "Graphics");
        }
        inline app::Graphics* create() {
            return il2cpp::create_object<app::Graphics>(get_class());
        }
    } // namespace Graphics
} // namespace app::classes::types
