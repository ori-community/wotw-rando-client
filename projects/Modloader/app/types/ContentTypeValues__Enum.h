#pragma once
#include <Modloader/app/structs/ContentTypeValues__Enum.h>
#include <Modloader/app/structs/ContentTypeValues__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ContentTypeValues__Enum {
        inline app::ContentTypeValues__Enum__Class** type_info() {
            static app::ContentTypeValues__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ContentTypeValues__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ContentTypeValues__Enum__Class* get_class() {
            return il2cpp::get_class<app::ContentTypeValues__Enum__Class>(type_info(), "System.Net", "ContentTypeValues");
        }
        inline app::ContentTypeValues__Enum* create() {
            return il2cpp::create_object<app::ContentTypeValues__Enum>(get_class());
        }
    } // namespace ContentTypeValues__Enum
} // namespace app::classes::types
