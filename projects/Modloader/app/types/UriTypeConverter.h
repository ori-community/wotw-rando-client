#pragma once
#include <Modloader/app/structs/UriTypeConverter.h>
#include <Modloader/app/structs/UriTypeConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UriTypeConverter {
        inline app::UriTypeConverter__Class** type_info() {
            static app::UriTypeConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UriTypeConverter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UriTypeConverter__Class* get_class() {
            return il2cpp::get_class<app::UriTypeConverter__Class>(type_info(), "System", "UriTypeConverter");
        }
        inline app::UriTypeConverter* create() {
            return il2cpp::create_object<app::UriTypeConverter>(get_class());
        }
    } // namespace UriTypeConverter
} // namespace app::classes::types
