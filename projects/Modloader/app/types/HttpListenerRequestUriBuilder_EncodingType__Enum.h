#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HttpListenerRequestUriBuilder_EncodingType__Enum__Class.h>
#include <Modloader/app/structs/HttpListenerRequestUriBuilder_EncodingType__Enum.h>

namespace app::classes::types {
    namespace HttpListenerRequestUriBuilder_EncodingType__Enum {
        namespace {
            inline app::HttpListenerRequestUriBuilder_EncodingType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::HttpListenerRequestUriBuilder_EncodingType__Enum__Class** type_info = &type_info_ref;
        inline app::HttpListenerRequestUriBuilder_EncodingType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::HttpListenerRequestUriBuilder_EncodingType__Enum__Class>(type_info, "System.Net", "HttpListenerRequestUriBuilder", "EncodingType");
        }
        inline app::HttpListenerRequestUriBuilder_EncodingType__Enum* create() {
            return il2cpp::create_object<app::HttpListenerRequestUriBuilder_EncodingType__Enum>(get_class());
        }
    } // namespace HttpListenerRequestUriBuilder_EncodingType__Enum
} // namespace app::classes::types
