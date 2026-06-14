#pragma once
#include <Modloader/app/structs/DetachRopeOnStomp.h>
#include <Modloader/app/structs/DetachRopeOnStomp__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DetachRopeOnStomp {
        inline app::DetachRopeOnStomp__Class** type_info() {
            static app::DetachRopeOnStomp__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DetachRopeOnStomp__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DetachRopeOnStomp__Class* get_class() {
            return il2cpp::get_class<app::DetachRopeOnStomp__Class>(type_info(), "", "DetachRopeOnStomp");
        }
        inline app::DetachRopeOnStomp* create() {
            return il2cpp::create_object<app::DetachRopeOnStomp>(get_class());
        }
    } // namespace DetachRopeOnStomp
} // namespace app::classes::types
