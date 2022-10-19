#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace KwolokTongueStatue_AllowedCollision {
        namespace {
            inline app::KwolokTongueStatue_AllowedCollision__Class* type_info_ref = nullptr;
        }
        inline app::KwolokTongueStatue_AllowedCollision__Class** type_info = &type_info_ref;
        inline app::KwolokTongueStatue_AllowedCollision__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokTongueStatue_AllowedCollision__Class>(type_info, "", "KwolokTongueStatue", "AllowedCollision");
        }
        inline app::KwolokTongueStatue_AllowedCollision* create() {
            return il2cpp::create_object<app::KwolokTongueStatue_AllowedCollision>(get_class());
        }
    } // namespace KwolokTongueStatue_AllowedCollision
} // namespace app::classes::types
