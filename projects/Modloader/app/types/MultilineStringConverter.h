#pragma once
#include <Modloader/app/structs/MultilineStringConverter.h>
#include <Modloader/app/structs/MultilineStringConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MultilineStringConverter {
        inline app::MultilineStringConverter__Class** type_info() {
            static app::MultilineStringConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MultilineStringConverter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MultilineStringConverter__Class* get_class() {
            return il2cpp::get_class<app::MultilineStringConverter__Class>(type_info(), "System.ComponentModel", "MultilineStringConverter");
        }
        inline app::MultilineStringConverter* create() {
            return il2cpp::create_object<app::MultilineStringConverter>(get_class());
        }
    } // namespace MultilineStringConverter
} // namespace app::classes::types
