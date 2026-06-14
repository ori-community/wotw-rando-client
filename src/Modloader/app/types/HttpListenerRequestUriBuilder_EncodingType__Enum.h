#pragma once
#include <Modloader/app/structs/HttpListenerRequestUriBuilder_EncodingType__Enum.h>
#include <Modloader/app/structs/HttpListenerRequestUriBuilder_EncodingType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HttpListenerRequestUriBuilder_EncodingType__Enum {
        inline app::HttpListenerRequestUriBuilder_EncodingType__Enum__Class** type_info() {
            static app::HttpListenerRequestUriBuilder_EncodingType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HttpListenerRequestUriBuilder_EncodingType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HttpListenerRequestUriBuilder_EncodingType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::HttpListenerRequestUriBuilder_EncodingType__Enum__Class>(type_info(), "System.Net", "HttpListenerRequestUriBuilder", "EncodingType");
        }
        inline app::HttpListenerRequestUriBuilder_EncodingType__Enum* create() {
            return il2cpp::create_object<app::HttpListenerRequestUriBuilder_EncodingType__Enum>(get_class());
        }
    } // namespace HttpListenerRequestUriBuilder_EncodingType__Enum
} // namespace app::classes::types
