#pragma once
#include <Modloader/app/structs/ArrayConverter.h>
#include <Modloader/app/structs/ArrayConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ArrayConverter {
        inline app::ArrayConverter__Class** type_info() {
            static app::ArrayConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ArrayConverter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ArrayConverter__Class* get_class() {
            return il2cpp::get_class<app::ArrayConverter__Class>(type_info(), "System.ComponentModel", "ArrayConverter");
        }
        inline app::ArrayConverter* create() {
            return il2cpp::create_object<app::ArrayConverter>(get_class());
        }
    } // namespace ArrayConverter
} // namespace app::classes::types
