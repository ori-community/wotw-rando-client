#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DetachRopeOnStomp__Class.h>
#include <Modloader/app/structs/DetachRopeOnStomp.h>

namespace app::classes::types {
    namespace DetachRopeOnStomp {
        namespace {
            inline app::DetachRopeOnStomp__Class* type_info_ref = nullptr;
        }
        inline app::DetachRopeOnStomp__Class** type_info = &type_info_ref;
        inline app::DetachRopeOnStomp__Class* get_class() {
            return il2cpp::get_class<app::DetachRopeOnStomp__Class>(type_info, "", "DetachRopeOnStomp");
        }
        inline app::DetachRopeOnStomp* create() {
            return il2cpp::create_object<app::DetachRopeOnStomp>(get_class());
        }
    } // namespace DetachRopeOnStomp
} // namespace app::classes::types
