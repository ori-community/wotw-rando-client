#pragma once
#include <Modloader/app/structs/ExpText.h>
#include <Modloader/app/structs/ExpText__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExpText {
        inline app::ExpText__Class** type_info() {
            static app::ExpText__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ExpText__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ExpText__Class* get_class() {
            return il2cpp::get_class<app::ExpText__Class>(type_info(), "", "ExpText");
        }
        inline app::ExpText* create() {
            return il2cpp::create_object<app::ExpText>(get_class());
        }
    } // namespace ExpText
} // namespace app::classes::types
