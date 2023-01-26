#pragma once
#include <Modloader/app/structs/UriPartial__Enum.h>
#include <Modloader/app/structs/UriPartial__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UriPartial__Enum {
        inline app::UriPartial__Enum__Class** type_info() {
            static app::UriPartial__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UriPartial__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UriPartial__Enum__Class* get_class() {
            return il2cpp::get_class<app::UriPartial__Enum__Class>(type_info(), "System", "UriPartial");
        }
        inline app::UriPartial__Enum* create() {
            return il2cpp::create_object<app::UriPartial__Enum>(get_class());
        }
    } // namespace UriPartial__Enum
} // namespace app::classes::types
