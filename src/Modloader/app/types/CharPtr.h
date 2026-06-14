#pragma once
#include <Modloader/app/structs/CharPtr.h>
#include <Modloader/app/structs/CharPtr__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharPtr {
        inline app::CharPtr__Class** type_info() {
            static app::CharPtr__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharPtr__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharPtr__Class* get_class() {
            return il2cpp::get_class<app::CharPtr__Class>(type_info(), "System", "Char*");
        }
        inline app::CharPtr* create() {
            return il2cpp::create_object<app::CharPtr>(get_class());
        }
    } // namespace CharPtr
} // namespace app::classes::types
