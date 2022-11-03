#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IceWall {
        namespace {
            inline app::IceWall__Class* type_info_ref = nullptr;
        }
        inline app::IceWall__Class** type_info = &type_info_ref;
        inline app::IceWall__Class* get_class() {
            return il2cpp::get_class<app::IceWall__Class>(type_info, "", "IceWall");
        }
        inline app::IceWall* create() {
            return il2cpp::create_object<app::IceWall>(get_class());
        }
    } // namespace IceWall
} // namespace app::classes::types
