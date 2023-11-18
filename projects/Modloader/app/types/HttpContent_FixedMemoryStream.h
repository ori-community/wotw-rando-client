#pragma once
#include <Modloader/app/structs/HttpContent_FixedMemoryStream.h>
#include <Modloader/app/structs/HttpContent_FixedMemoryStream__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HttpContent_FixedMemoryStream {
        inline app::HttpContent_FixedMemoryStream__Class** type_info() {
            static app::HttpContent_FixedMemoryStream__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HttpContent_FixedMemoryStream__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HttpContent_FixedMemoryStream__Class* get_class() {
            return il2cpp::get_nested_class<app::HttpContent_FixedMemoryStream__Class>(type_info(), "System.Net.Http", "HttpContent", "FixedMemoryStream");
        }
        inline app::HttpContent_FixedMemoryStream* create() {
            return il2cpp::create_object<app::HttpContent_FixedMemoryStream>(get_class());
        }
    } // namespace HttpContent_FixedMemoryStream
} // namespace app::classes::types
