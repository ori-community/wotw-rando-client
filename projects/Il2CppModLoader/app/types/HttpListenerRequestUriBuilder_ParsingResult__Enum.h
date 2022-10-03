#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HttpListenerRequestUriBuilder_ParsingResult__Enum {
        namespace {
            app::HttpListenerRequestUriBuilder_ParsingResult__Enum__Class* type_info_ref = nullptr;
        }
        app::HttpListenerRequestUriBuilder_ParsingResult__Enum__Class** type_info = &type_info_ref;
        inline app::HttpListenerRequestUriBuilder_ParsingResult__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::HttpListenerRequestUriBuilder_ParsingResult__Enum__Class>(type_info, "System.Net", "HttpListenerRequestUriBuilder", "ParsingResult");
        }
        inline app::HttpListenerRequestUriBuilder_ParsingResult__Enum* create() {
            return il2cpp::create_object<app::HttpListenerRequestUriBuilder_ParsingResult__Enum>(get_class());
        }
    } // namespace HttpListenerRequestUriBuilder_ParsingResult__Enum
} // namespace app::classes::types
