#pragma once
#include <Modloader/app/structs/SingleConverter.h>
#include <Modloader/app/structs/SingleConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SingleConverter {
        inline app::SingleConverter__Class** type_info() {
            static app::SingleConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SingleConverter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SingleConverter__Class* get_class() {
            return il2cpp::get_class<app::SingleConverter__Class>(type_info(), "System.ComponentModel", "SingleConverter");
        }
        inline app::SingleConverter* create() {
            return il2cpp::create_object<app::SingleConverter>(get_class());
        }
    } // namespace SingleConverter
} // namespace app::classes::types
