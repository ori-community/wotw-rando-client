#pragma once
#include <Modloader/app/structs/SeinWallDangle.h>
#include <Modloader/app/structs/SeinWallDangle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinWallDangle {
        inline app::SeinWallDangle__Class** type_info() {
            static app::SeinWallDangle__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinWallDangle__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinWallDangle__Class* get_class() {
            return il2cpp::get_class<app::SeinWallDangle__Class>(type_info(), "", "SeinWallDangle");
        }
        inline app::SeinWallDangle* create() {
            return il2cpp::create_object<app::SeinWallDangle>(get_class());
        }
    } // namespace SeinWallDangle
} // namespace app::classes::types
