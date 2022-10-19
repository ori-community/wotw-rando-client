#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XUserGamertagComponent__Enum {
        namespace {
            inline app::XUserGamertagComponent__Enum__Class* type_info_ref = nullptr;
        }
        inline app::XUserGamertagComponent__Enum__Class** type_info = &type_info_ref;
        inline app::XUserGamertagComponent__Enum__Class* get_class() {
            return il2cpp::get_class<app::XUserGamertagComponent__Enum__Class>(type_info, "XGamingRuntime", "XUserGamertagComponent");
        }
        inline app::XUserGamertagComponent__Enum* create() {
            return il2cpp::create_object<app::XUserGamertagComponent__Enum>(get_class());
        }
    } // namespace XUserGamertagComponent__Enum
} // namespace app::classes::types
