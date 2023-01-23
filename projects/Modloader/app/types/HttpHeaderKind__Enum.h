#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HttpHeaderKind__Enum__Class.h>
#include <Modloader/app/structs/HttpHeaderKind__Enum.h>

namespace app::classes::types {
    namespace HttpHeaderKind__Enum {
        namespace {
            inline app::HttpHeaderKind__Enum__Class* type_info_ref = nullptr;
        }
        inline app::HttpHeaderKind__Enum__Class** type_info = &type_info_ref;
        inline app::HttpHeaderKind__Enum__Class* get_class() {
            return il2cpp::get_class<app::HttpHeaderKind__Enum__Class>(type_info, "System.Net.Http.Headers", "HttpHeaderKind");
        }
        inline app::HttpHeaderKind__Enum* create() {
            return il2cpp::create_object<app::HttpHeaderKind__Enum>(get_class());
        }
    } // namespace HttpHeaderKind__Enum
} // namespace app::classes::types
