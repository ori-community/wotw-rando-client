#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DateTimeRawInfo {
        namespace {
            app::DateTimeRawInfo__Class* type_info_ref = nullptr;
        }
        app::DateTimeRawInfo__Class** type_info = &type_info_ref;
        inline app::DateTimeRawInfo__Class* get_class() {
            return il2cpp::get_class<app::DateTimeRawInfo__Class>(type_info, "System", "DateTimeRawInfo");
        }
        inline app::DateTimeRawInfo* create() {
            return il2cpp::create_object<app::DateTimeRawInfo>(get_class());
        }
        inline app::DateTimeRawInfo__Boxed* box(app::DateTimeRawInfo value) {
            return il2cpp::box_value<app::DateTimeRawInfo__Boxed>(get_class(), value);
        }
    } // namespace DateTimeRawInfo
} // namespace app::classes::types
