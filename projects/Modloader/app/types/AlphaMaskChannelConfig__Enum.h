#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AlphaMaskChannelConfig__Enum__Class.h>
#include <Modloader/app/structs/AlphaMaskChannelConfig__Enum.h>

namespace app::classes::types {
    namespace AlphaMaskChannelConfig__Enum {
        namespace {
            inline app::AlphaMaskChannelConfig__Enum__Class* type_info_ref = nullptr;
        }
        inline app::AlphaMaskChannelConfig__Enum__Class** type_info = &type_info_ref;
        inline app::AlphaMaskChannelConfig__Enum__Class* get_class() {
            return il2cpp::get_class<app::AlphaMaskChannelConfig__Enum__Class>(type_info, "", "AlphaMaskChannelConfig");
        }
        inline app::AlphaMaskChannelConfig__Enum* create() {
            return il2cpp::create_object<app::AlphaMaskChannelConfig__Enum>(get_class());
        }
    } // namespace AlphaMaskChannelConfig__Enum
} // namespace app::classes::types
