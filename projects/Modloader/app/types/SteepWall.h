#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SteepWall__Class.h>
#include <Modloader/app/structs/SteepWall.h>

namespace app::classes::types {
    namespace SteepWall {
        namespace {
            inline app::SteepWall__Class* type_info_ref = nullptr;
        }
        inline app::SteepWall__Class** type_info = &type_info_ref;
        inline app::SteepWall__Class* get_class() {
            return il2cpp::get_class<app::SteepWall__Class>(type_info, "", "SteepWall");
        }
        inline app::SteepWall* create() {
            return il2cpp::create_object<app::SteepWall>(get_class());
        }
    } // namespace SteepWall
} // namespace app::classes::types
