#pragma once
#include <Modloader/app/structs/IceWall.h>
#include <Modloader/app/structs/IceWall__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IceWall {
        inline app::IceWall__Class** type_info() {
            static app::IceWall__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IceWall__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IceWall__Class* get_class() {
            return il2cpp::get_class<app::IceWall__Class>(type_info(), "", "IceWall");
        }
        inline app::IceWall* create() {
            return il2cpp::create_object<app::IceWall>(get_class());
        }
    } // namespace IceWall
} // namespace app::classes::types
