#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraSampler_c {
        inline app::CameraSampler_c__Class** type_info = (app::CameraSampler_c__Class**)(modloader::win::memory::resolve_rva(0x0474F2D0));
        inline app::CameraSampler_c__Class* get_class() {
            return il2cpp::get_nested_class<app::CameraSampler_c__Class>(type_info, "Moon.ArtOptimization", "CameraSampler", "<>c");
        }
        inline app::CameraSampler_c* create() {
            return il2cpp::create_object<app::CameraSampler_c>(get_class());
        }
    } // namespace CameraSampler_c
} // namespace app::classes::types
