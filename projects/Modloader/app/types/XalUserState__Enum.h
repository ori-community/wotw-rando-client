#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XalUserState__Enum {
        namespace {
            inline app::XalUserState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::XalUserState__Enum__Class** type_info = &type_info_ref;
        inline app::XalUserState__Enum__Class* get_class() {
            return il2cpp::get_class<app::XalUserState__Enum__Class>(type_info, "Microsoft.Xbox.Services.Xal", "XalUserState");
        }
        inline app::XalUserState__Enum* create() {
            return il2cpp::create_object<app::XalUserState__Enum>(get_class());
        }
    } // namespace XalUserState__Enum
} // namespace app::classes::types
