#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EVoiceResult__Enum__Class.h>
#include <Modloader/app/structs/EVoiceResult__Enum.h>

namespace app::classes::types {
    namespace EVoiceResult__Enum {
        namespace {
            inline app::EVoiceResult__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EVoiceResult__Enum__Class** type_info = &type_info_ref;
        inline app::EVoiceResult__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVoiceResult__Enum__Class>(type_info, "Steamworks", "EVoiceResult");
        }
        inline app::EVoiceResult__Enum* create() {
            return il2cpp::create_object<app::EVoiceResult__Enum>(get_class());
        }
    } // namespace EVoiceResult__Enum
} // namespace app::classes::types
