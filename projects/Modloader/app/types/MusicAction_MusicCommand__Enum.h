#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MusicAction_MusicCommand__Enum {
        namespace {
            inline app::MusicAction_MusicCommand__Enum__Class* type_info_ref = nullptr;
        }
        inline app::MusicAction_MusicCommand__Enum__Class** type_info = &type_info_ref;
        inline app::MusicAction_MusicCommand__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MusicAction_MusicCommand__Enum__Class>(type_info, "", "MusicAction", "MusicCommand");
        }
        inline app::MusicAction_MusicCommand__Enum* create() {
            return il2cpp::create_object<app::MusicAction_MusicCommand__Enum>(get_class());
        }
    } // namespace MusicAction_MusicCommand__Enum
} // namespace app::classes::types
