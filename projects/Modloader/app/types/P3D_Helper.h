#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/P3D_Helper__Class.h>
#include <Modloader/app/structs/P3D_Helper.h>

namespace app::classes::types {
    namespace P3D_Helper {
        inline app::P3D_Helper__Class** type_info = (app::P3D_Helper__Class**)(modloader::win::memory::resolve_rva(0x04710400));
        inline app::P3D_Helper__Class* get_class() {
            return il2cpp::get_class<app::P3D_Helper__Class>(type_info, "", "P3D_Helper");
        }
        inline app::P3D_Helper* create() {
            return il2cpp::create_object<app::P3D_Helper>(get_class());
        }
    } // namespace P3D_Helper
} // namespace app::classes::types
