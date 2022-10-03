#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HttpRequestCacheLevel__Enum {
        namespace {
            app::HttpRequestCacheLevel__Enum__Class* type_info_ref = nullptr;
        }
        app::HttpRequestCacheLevel__Enum__Class** type_info = &type_info_ref;
        inline app::HttpRequestCacheLevel__Enum__Class* get_class() {
            return il2cpp::get_class<app::HttpRequestCacheLevel__Enum__Class>(type_info, "System.Net.Cache", "HttpRequestCacheLevel");
        }
        inline app::HttpRequestCacheLevel__Enum* create() {
            return il2cpp::create_object<app::HttpRequestCacheLevel__Enum>(get_class());
        }
    } // namespace HttpRequestCacheLevel__Enum
} // namespace app::classes::types
