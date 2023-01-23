#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinGrabWall__Class.h>
#include <Modloader/app/structs/SeinGrabWall.h>

namespace app::classes::types {
    namespace SeinGrabWall {
        namespace {
            inline app::SeinGrabWall__Class* type_info_ref = nullptr;
        }
        inline app::SeinGrabWall__Class** type_info = &type_info_ref;
        inline app::SeinGrabWall__Class* get_class() {
            return il2cpp::get_class<app::SeinGrabWall__Class>(type_info, "", "SeinGrabWall");
        }
        inline app::SeinGrabWall* create() {
            return il2cpp::create_object<app::SeinGrabWall>(get_class());
        }
    } // namespace SeinGrabWall
} // namespace app::classes::types
