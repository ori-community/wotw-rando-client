#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkChannelConfigType__Enum {
        namespace {
            inline app::AkChannelConfigType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::AkChannelConfigType__Enum__Class** type_info = &type_info_ref;
        inline app::AkChannelConfigType__Enum__Class* get_class() {
            return il2cpp::get_class<app::AkChannelConfigType__Enum__Class>(type_info, "", "AkChannelConfigType");
        }
        inline app::AkChannelConfigType__Enum* create() {
            return il2cpp::create_object<app::AkChannelConfigType__Enum>(get_class());
        }
    } // namespace AkChannelConfigType__Enum
} // namespace app::classes::types
