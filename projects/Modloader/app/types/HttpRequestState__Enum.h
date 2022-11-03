#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HttpRequestState__Enum {
        namespace {
            inline app::HttpRequestState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::HttpRequestState__Enum__Class** type_info = &type_info_ref;
        inline app::HttpRequestState__Enum__Class* get_class() {
            return il2cpp::get_class<app::HttpRequestState__Enum__Class>(type_info, "PlayFab.Internal", "HttpRequestState");
        }
        inline app::HttpRequestState__Enum* create() {
            return il2cpp::create_object<app::HttpRequestState__Enum>(get_class());
        }
    } // namespace HttpRequestState__Enum
} // namespace app::classes::types
