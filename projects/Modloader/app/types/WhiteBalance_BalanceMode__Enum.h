#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WhiteBalance_BalanceMode__Enum {
        namespace {
            inline app::WhiteBalance_BalanceMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::WhiteBalance_BalanceMode__Enum__Class** type_info = &type_info_ref;
        inline app::WhiteBalance_BalanceMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::WhiteBalance_BalanceMode__Enum__Class>(type_info, "Colorful", "WhiteBalance", "BalanceMode");
        }
        inline app::WhiteBalance_BalanceMode__Enum* create() {
            return il2cpp::create_object<app::WhiteBalance_BalanceMode__Enum>(get_class());
        }
    } // namespace WhiteBalance_BalanceMode__Enum
} // namespace app::classes::types
