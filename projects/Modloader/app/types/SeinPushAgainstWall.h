#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinPushAgainstWall__Class.h>
#include <Modloader/app/structs/SeinPushAgainstWall.h>

namespace app::classes::types {
    namespace SeinPushAgainstWall {
        namespace {
            inline app::SeinPushAgainstWall__Class* type_info_ref = nullptr;
        }
        inline app::SeinPushAgainstWall__Class** type_info = &type_info_ref;
        inline app::SeinPushAgainstWall__Class* get_class() {
            return il2cpp::get_class<app::SeinPushAgainstWall__Class>(type_info, "", "SeinPushAgainstWall");
        }
        inline app::SeinPushAgainstWall* create() {
            return il2cpp::create_object<app::SeinPushAgainstWall>(get_class());
        }
    } // namespace SeinPushAgainstWall
} // namespace app::classes::types
