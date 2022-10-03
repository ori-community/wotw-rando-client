#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HttpRequestMessage {
        namespace {
            app::HttpRequestMessage__Class* type_info_ref = nullptr;
        }
        app::HttpRequestMessage__Class** type_info = &type_info_ref;
        inline app::HttpRequestMessage__Class* get_class() {
            return il2cpp::get_class<app::HttpRequestMessage__Class>(type_info, "System.Net.Http", "HttpRequestMessage");
        }
        inline app::HttpRequestMessage* create() {
            return il2cpp::create_object<app::HttpRequestMessage>(get_class());
        }
    } // namespace HttpRequestMessage
} // namespace app::classes::types
