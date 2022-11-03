#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinController3D {
        inline app::SeinController3D__Class** type_info = (app::SeinController3D__Class**)(modloader::win::memory::resolve_rva(0x04756750));
        inline app::SeinController3D__Class* get_class() {
            return il2cpp::get_class<app::SeinController3D__Class>(type_info, "", "SeinController3D");
        }
        inline app::SeinController3D* create() {
            return il2cpp::create_object<app::SeinController3D>(get_class());
        }
    } // namespace SeinController3D
} // namespace app::classes::types
