#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinGrabWallPuppet {
        inline app::SeinGrabWallPuppet__Class** type_info = (app::SeinGrabWallPuppet__Class**)(modloader::win::memory::resolve_rva(0x0475BAD0));
        inline app::SeinGrabWallPuppet__Class* get_class() {
            return il2cpp::get_class<app::SeinGrabWallPuppet__Class>(type_info, "", "SeinGrabWallPuppet");
        }
        inline app::SeinGrabWallPuppet* create() {
            return il2cpp::create_object<app::SeinGrabWallPuppet>(get_class());
        }
    } // namespace SeinGrabWallPuppet
} // namespace app::classes::types
