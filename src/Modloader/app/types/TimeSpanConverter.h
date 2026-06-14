#pragma once
#include <Modloader/app/structs/TimeSpanConverter.h>
#include <Modloader/app/structs/TimeSpanConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimeSpanConverter {
        inline app::TimeSpanConverter__Class** type_info() {
            static app::TimeSpanConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimeSpanConverter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimeSpanConverter__Class* get_class() {
            return il2cpp::get_class<app::TimeSpanConverter__Class>(type_info(), "System.ComponentModel", "TimeSpanConverter");
        }
        inline app::TimeSpanConverter* create() {
            return il2cpp::create_object<app::TimeSpanConverter>(get_class());
        }
    } // namespace TimeSpanConverter
} // namespace app::classes::types
