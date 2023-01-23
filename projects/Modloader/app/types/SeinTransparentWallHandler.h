#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinTransparentWallHandler__Class.h>
#include <Modloader/app/structs/SeinTransparentWallHandler.h>

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
