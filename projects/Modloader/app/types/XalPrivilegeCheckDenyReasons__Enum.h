#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XalPrivilegeCheckDenyReasons__Enum {
        namespace {
            inline app::XalPrivilegeCheckDenyReasons__Enum__Class* type_info_ref = nullptr;
        }
        inline app::XalPrivilegeCheckDenyReasons__Enum__Class** type_info = &type_info_ref;
        inline app::XalPrivilegeCheckDenyReasons__Enum__Class* get_class() {
            return il2cpp::get_class<app::XalPrivilegeCheckDenyReasons__Enum__Class>(type_info, "Microsoft.Xbox.Services.Xal", "XalPrivilegeCheckDenyReasons");
        }
        inline app::XalPrivilegeCheckDenyReasons__Enum* create() {
            return il2cpp::create_object<app::XalPrivilegeCheckDenyReasons__Enum>(get_class());
        }
    } // namespace XalPrivilegeCheckDenyReasons__Enum
} // namespace app::classes::types
