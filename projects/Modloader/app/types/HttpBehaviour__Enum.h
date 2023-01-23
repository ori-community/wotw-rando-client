#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HttpBehaviour__Enum__Class.h>
#include <Modloader/app/structs/HttpBehaviour__Enum.h>

namespace app::classes::types {
    namespace HttpBehaviour__Enum {
        namespace {
            inline app::HttpBehaviour__Enum__Class* type_info_ref = nullptr;
        }
        inline app::HttpBehaviour__Enum__Class** type_info = &type_info_ref;
        inline app::HttpBehaviour__Enum__Class* get_class() {
            return il2cpp::get_class<app::HttpBehaviour__Enum__Class>(type_info, "System.Net", "HttpBehaviour");
        }
        inline app::HttpBehaviour__Enum* create() {
            return il2cpp::create_object<app::HttpBehaviour__Enum>(get_class());
        }
    } // namespace HttpBehaviour__Enum
} // namespace app::classes::types
