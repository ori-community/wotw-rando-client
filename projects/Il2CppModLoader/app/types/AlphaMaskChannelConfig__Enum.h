#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AlphaMaskChannelConfig__Enum {
        namespace {
            app::AlphaMaskChannelConfig__Enum__Class* type_info_ref = nullptr;
        }
        app::AlphaMaskChannelConfig__Enum__Class** type_info = &type_info_ref;
        inline app::AlphaMaskChannelConfig__Enum__Class* get_class() {
            return il2cpp::get_class<app::AlphaMaskChannelConfig__Enum__Class>(type_info, "", "AlphaMaskChannelConfig");
        }
        inline app::AlphaMaskChannelConfig__Enum* create() {
            return il2cpp::create_object<app::AlphaMaskChannelConfig__Enum>(get_class());
        }
    } // namespace AlphaMaskChannelConfig__Enum
} // namespace app::classes::types
