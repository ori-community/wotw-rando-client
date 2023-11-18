#pragma once
#include <Modloader/app/structs/CultureInfoConverter.h>
#include <Modloader/app/structs/CultureInfoConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CultureInfoConverter {
        inline app::CultureInfoConverter__Class** type_info() {
            static app::CultureInfoConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CultureInfoConverter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CultureInfoConverter__Class* get_class() {
            return il2cpp::get_class<app::CultureInfoConverter__Class>(type_info(), "System.ComponentModel", "CultureInfoConverter");
        }
        inline app::CultureInfoConverter* create() {
            return il2cpp::create_object<app::CultureInfoConverter>(get_class());
        }
    } // namespace CultureInfoConverter
} // namespace app::classes::types
