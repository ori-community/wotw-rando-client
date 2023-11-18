#pragma once
#include <Modloader/app/structs/HttpRequestMessage.h>
#include <Modloader/app/structs/HttpRequestMessage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HttpRequestMessage {
        inline app::HttpRequestMessage__Class** type_info() {
            static app::HttpRequestMessage__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HttpRequestMessage__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HttpRequestMessage__Class* get_class() {
            return il2cpp::get_class<app::HttpRequestMessage__Class>(type_info(), "System.Net.Http", "HttpRequestMessage");
        }
        inline app::HttpRequestMessage* create() {
            return il2cpp::create_object<app::HttpRequestMessage>(get_class());
        }
    } // namespace HttpRequestMessage
} // namespace app::classes::types
