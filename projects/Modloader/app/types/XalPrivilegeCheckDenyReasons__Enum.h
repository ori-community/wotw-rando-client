#pragma once
#include <Modloader/app/structs/XalPrivilegeCheckDenyReasons__Enum.h>
#include <Modloader/app/structs/XalPrivilegeCheckDenyReasons__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XalPrivilegeCheckDenyReasons__Enum {
        inline app::XalPrivilegeCheckDenyReasons__Enum__Class** type_info() {
            static app::XalPrivilegeCheckDenyReasons__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XalPrivilegeCheckDenyReasons__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XalPrivilegeCheckDenyReasons__Enum__Class* get_class() {
            return il2cpp::get_class<app::XalPrivilegeCheckDenyReasons__Enum__Class>(type_info(), "Microsoft.Xbox.Services.Xal", "XalPrivilegeCheckDenyReasons");
        }
        inline app::XalPrivilegeCheckDenyReasons__Enum* create() {
            return il2cpp::create_object<app::XalPrivilegeCheckDenyReasons__Enum>(get_class());
        }
    } // namespace XalPrivilegeCheckDenyReasons__Enum
} // namespace app::classes::types
