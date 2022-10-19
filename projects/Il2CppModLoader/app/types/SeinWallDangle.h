#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinWallDangle {
        namespace {
            inline app::SeinWallDangle__Class* type_info_ref = nullptr;
        }
        inline app::SeinWallDangle__Class** type_info = &type_info_ref;
        inline app::SeinWallDangle__Class* get_class() {
            return il2cpp::get_class<app::SeinWallDangle__Class>(type_info, "", "SeinWallDangle");
        }
        inline app::SeinWallDangle* create() {
            return il2cpp::create_object<app::SeinWallDangle>(get_class());
        }
    } // namespace SeinWallDangle
} // namespace app::classes::types
