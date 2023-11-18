#pragma once
#include <Modloader/app/structs/DoubleConverter.h>
#include <Modloader/app/structs/DoubleConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DoubleConverter {
        inline app::DoubleConverter__Class** type_info() {
            static app::DoubleConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DoubleConverter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DoubleConverter__Class* get_class() {
            return il2cpp::get_class<app::DoubleConverter__Class>(type_info(), "System.ComponentModel", "DoubleConverter");
        }
        inline app::DoubleConverter* create() {
            return il2cpp::create_object<app::DoubleConverter>(get_class());
        }
    } // namespace DoubleConverter
} // namespace app::classes::types
