#pragma once
#include <Modloader/app/structs/WhiteBalance_BalanceMode__Enum.h>
#include <Modloader/app/structs/WhiteBalance_BalanceMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WhiteBalance_BalanceMode__Enum {
        inline app::WhiteBalance_BalanceMode__Enum__Class** type_info() {
            static app::WhiteBalance_BalanceMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WhiteBalance_BalanceMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WhiteBalance_BalanceMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::WhiteBalance_BalanceMode__Enum__Class>(type_info(), "Colorful", "WhiteBalance", "BalanceMode");
        }
        inline app::WhiteBalance_BalanceMode__Enum* create() {
            return il2cpp::create_object<app::WhiteBalance_BalanceMode__Enum>(get_class());
        }
    } // namespace WhiteBalance_BalanceMode__Enum
} // namespace app::classes::types
