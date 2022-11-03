#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinGrabSurfacePuppet {
        inline app::SeinGrabSurfacePuppet__Class** type_info = (app::SeinGrabSurfacePuppet__Class**)(modloader::win::memory::resolve_rva(0x04729248));
        inline app::SeinGrabSurfacePuppet__Class* get_class() {
            return il2cpp::get_class<app::SeinGrabSurfacePuppet__Class>(type_info, "", "SeinGrabSurfacePuppet");
        }
        inline app::SeinGrabSurfacePuppet* create() {
            return il2cpp::create_object<app::SeinGrabSurfacePuppet>(get_class());
        }
    } // namespace SeinGrabSurfacePuppet
} // namespace app::classes::types
