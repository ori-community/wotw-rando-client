#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinTransparentWallHandler {
        inline app::SeinTransparentWallHandler__Class** type_info = (app::SeinTransparentWallHandler__Class**)(modloader::win::memory::resolve_rva(0x0475BDE8));
        inline app::SeinTransparentWallHandler__Class* get_class() {
            return il2cpp::get_class<app::SeinTransparentWallHandler__Class>(type_info, "", "SeinTransparentWallHandler");
        }
        inline app::SeinTransparentWallHandler* create() {
            return il2cpp::create_object<app::SeinTransparentWallHandler>(get_class());
        }
    } // namespace SeinTransparentWallHandler
} // namespace app::classes::types
