#pragma once
#include <Modloader/app/structs/HttpWriteMode__Enum.h>
#include <Modloader/app/structs/HttpWriteMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HttpWriteMode__Enum {
        inline app::HttpWriteMode__Enum__Class** type_info() {
            static app::HttpWriteMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HttpWriteMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HttpWriteMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::HttpWriteMode__Enum__Class>(type_info(), "System.Net", "HttpWriteMode");
        }
        inline app::HttpWriteMode__Enum* create() {
            return il2cpp::create_object<app::HttpWriteMode__Enum>(get_class());
        }
    } // namespace HttpWriteMode__Enum
} // namespace app::classes::types
