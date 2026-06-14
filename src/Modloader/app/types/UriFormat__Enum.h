#pragma once
#include <Modloader/app/structs/UriFormat__Enum.h>
#include <Modloader/app/structs/UriFormat__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UriFormat__Enum {
        inline app::UriFormat__Enum__Class** type_info() {
            static app::UriFormat__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UriFormat__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UriFormat__Enum__Class* get_class() {
            return il2cpp::get_class<app::UriFormat__Enum__Class>(type_info(), "System", "UriFormat");
        }
        inline app::UriFormat__Enum* create() {
            return il2cpp::create_object<app::UriFormat__Enum>(get_class());
        }
    } // namespace UriFormat__Enum
} // namespace app::classes::types
