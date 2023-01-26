#pragma once
#include <Modloader/app/structs/KwolokTongueStatue.h>
#include <Modloader/app/structs/KwolokTongueStatue__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokTongueStatue {
        inline app::KwolokTongueStatue__Class** type_info() {
            static app::KwolokTongueStatue__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KwolokTongueStatue__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KwolokTongueStatue__Class* get_class() {
            return il2cpp::get_class<app::KwolokTongueStatue__Class>(type_info(), "", "KwolokTongueStatue");
        }
        inline app::KwolokTongueStatue* create() {
            return il2cpp::create_object<app::KwolokTongueStatue>(get_class());
        }
    } // namespace KwolokTongueStatue
} // namespace app::classes::types
