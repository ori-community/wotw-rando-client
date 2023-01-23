#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HttpContent_FixedMemoryStream__Class.h>
#include <Modloader/app/structs/HttpContent_FixedMemoryStream.h>

namespace app::classes::types {
    namespace HttpContent_FixedMemoryStream {
        namespace {
            inline app::HttpContent_FixedMemoryStream__Class* type_info_ref = nullptr;
        }
        inline app::HttpContent_FixedMemoryStream__Class** type_info = &type_info_ref;
        inline app::HttpContent_FixedMemoryStream__Class* get_class() {
            return il2cpp::get_nested_class<app::HttpContent_FixedMemoryStream__Class>(type_info, "System.Net.Http", "HttpContent", "FixedMemoryStream");
        }
        inline app::HttpContent_FixedMemoryStream* create() {
            return il2cpp::create_object<app::HttpContent_FixedMemoryStream>(get_class());
        }
    } // namespace HttpContent_FixedMemoryStream
} // namespace app::classes::types
