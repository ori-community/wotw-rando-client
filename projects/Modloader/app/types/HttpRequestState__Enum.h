#pragma once
#include <Modloader/app/structs/HttpRequestState__Enum.h>
#include <Modloader/app/structs/HttpRequestState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HttpRequestState__Enum {
        inline app::HttpRequestState__Enum__Class** type_info() {
            static app::HttpRequestState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HttpRequestState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HttpRequestState__Enum__Class* get_class() {
            return il2cpp::get_class<app::HttpRequestState__Enum__Class>(type_info(), "PlayFab.Internal", "HttpRequestState");
        }
        inline app::HttpRequestState__Enum* create() {
            return il2cpp::create_object<app::HttpRequestState__Enum>(get_class());
        }
    } // namespace HttpRequestState__Enum
} // namespace app::classes::types
