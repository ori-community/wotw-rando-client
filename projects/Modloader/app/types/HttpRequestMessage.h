#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HttpRequestMessage__Class.h>
#include <Modloader/app/structs/HttpRequestMessage.h>

namespace app::classes::types {
    namespace HttpRequestMessage {
        namespace {
            inline app::HttpRequestMessage__Class* type_info_ref = nullptr;
        }
        inline app::HttpRequestMessage__Class** type_info = &type_info_ref;
        inline app::HttpRequestMessage__Class* get_class() {
            return il2cpp::get_class<app::HttpRequestMessage__Class>(type_info, "System.Net.Http", "HttpRequestMessage");
        }
        inline app::HttpRequestMessage* create() {
            return il2cpp::create_object<app::HttpRequestMessage>(get_class());
        }
    } // namespace HttpRequestMessage
} // namespace app::classes::types
