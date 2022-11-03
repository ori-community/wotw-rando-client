#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XalPrivilege__Enum {
        namespace {
            inline app::XalPrivilege__Enum__Class* type_info_ref = nullptr;
        }
        inline app::XalPrivilege__Enum__Class** type_info = &type_info_ref;
        inline app::XalPrivilege__Enum__Class* get_class() {
            return il2cpp::get_class<app::XalPrivilege__Enum__Class>(type_info, "Microsoft.Xbox.Services.Xal", "XalPrivilege");
        }
        inline app::XalPrivilege__Enum* create() {
            return il2cpp::create_object<app::XalPrivilege__Enum>(get_class());
        }
    } // namespace XalPrivilege__Enum
} // namespace app::classes::types
