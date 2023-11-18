#pragma once
#include <Modloader/app/structs/UriHostNameType__Enum.h>
#include <Modloader/app/structs/UriHostNameType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UriHostNameType__Enum {
        inline app::UriHostNameType__Enum__Class** type_info() {
            static app::UriHostNameType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UriHostNameType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UriHostNameType__Enum__Class* get_class() {
            return il2cpp::get_class<app::UriHostNameType__Enum__Class>(type_info(), "System", "UriHostNameType");
        }
        inline app::UriHostNameType__Enum* create() {
            return il2cpp::create_object<app::UriHostNameType__Enum>(get_class());
        }
    } // namespace UriHostNameType__Enum
} // namespace app::classes::types
