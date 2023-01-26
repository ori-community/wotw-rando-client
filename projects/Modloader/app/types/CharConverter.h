#pragma once
#include <Modloader/app/structs/CharConverter.h>
#include <Modloader/app/structs/CharConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharConverter {
        inline app::CharConverter__Class** type_info() {
            static app::CharConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharConverter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharConverter__Class* get_class() {
            return il2cpp::get_class<app::CharConverter__Class>(type_info(), "System.ComponentModel", "CharConverter");
        }
        inline app::CharConverter* create() {
            return il2cpp::create_object<app::CharConverter>(get_class());
        }
    } // namespace CharConverter
} // namespace app::classes::types
