#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HttpWriteMode__Enum {
        namespace {
            inline app::HttpWriteMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::HttpWriteMode__Enum__Class** type_info = &type_info_ref;
        inline app::HttpWriteMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::HttpWriteMode__Enum__Class>(type_info, "System.Net", "HttpWriteMode");
        }
        inline app::HttpWriteMode__Enum* create() {
            return il2cpp::create_object<app::HttpWriteMode__Enum>(get_class());
        }
    } // namespace HttpWriteMode__Enum
} // namespace app::classes::types
