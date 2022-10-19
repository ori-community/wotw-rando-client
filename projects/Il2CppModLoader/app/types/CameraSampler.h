#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraSampler {
        inline app::CameraSampler__Class** type_info = (app::CameraSampler__Class**)(modloader::win::memory::resolve_rva(0x0475B1F0));
        inline app::CameraSampler__Class* get_class() {
            return il2cpp::get_class<app::CameraSampler__Class>(type_info, "Moon.ArtOptimization", "CameraSampler");
        }
        inline app::CameraSampler* create() {
            return il2cpp::create_object<app::CameraSampler>(get_class());
        }
    } // namespace CameraSampler
} // namespace app::classes::types
