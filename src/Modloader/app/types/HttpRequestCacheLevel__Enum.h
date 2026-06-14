#pragma once
#include <Modloader/app/structs/HttpRequestCacheLevel__Enum.h>
#include <Modloader/app/structs/HttpRequestCacheLevel__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HttpRequestCacheLevel__Enum {
        inline app::HttpRequestCacheLevel__Enum__Class** type_info() {
            static app::HttpRequestCacheLevel__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HttpRequestCacheLevel__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HttpRequestCacheLevel__Enum__Class* get_class() {
            return il2cpp::get_class<app::HttpRequestCacheLevel__Enum__Class>(type_info(), "System.Net.Cache", "HttpRequestCacheLevel");
        }
        inline app::HttpRequestCacheLevel__Enum* create() {
            return il2cpp::create_object<app::HttpRequestCacheLevel__Enum>(get_class());
        }
    } // namespace HttpRequestCacheLevel__Enum
} // namespace app::classes::types
