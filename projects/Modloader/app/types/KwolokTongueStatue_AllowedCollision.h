#pragma once
#include <Modloader/app/structs/KwolokTongueStatue_AllowedCollision.h>
#include <Modloader/app/structs/KwolokTongueStatue_AllowedCollision__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokTongueStatue_AllowedCollision {
        inline app::KwolokTongueStatue_AllowedCollision__Class** type_info() {
            static app::KwolokTongueStatue_AllowedCollision__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KwolokTongueStatue_AllowedCollision__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KwolokTongueStatue_AllowedCollision__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokTongueStatue_AllowedCollision__Class>(type_info(), "", "KwolokTongueStatue", "AllowedCollision");
        }
        inline app::KwolokTongueStatue_AllowedCollision* create() {
            return il2cpp::create_object<app::KwolokTongueStatue_AllowedCollision>(get_class());
        }
    } // namespace KwolokTongueStatue_AllowedCollision
} // namespace app::classes::types
