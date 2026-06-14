#pragma once
#include <Modloader/app/structs/MusicAction_MusicCommand__Enum.h>
#include <Modloader/app/structs/MusicAction_MusicCommand__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MusicAction_MusicCommand__Enum {
        inline app::MusicAction_MusicCommand__Enum__Class** type_info() {
            static app::MusicAction_MusicCommand__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MusicAction_MusicCommand__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MusicAction_MusicCommand__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MusicAction_MusicCommand__Enum__Class>(type_info(), "", "MusicAction", "MusicCommand");
        }
        inline app::MusicAction_MusicCommand__Enum* create() {
            return il2cpp::create_object<app::MusicAction_MusicCommand__Enum>(get_class());
        }
    } // namespace MusicAction_MusicCommand__Enum
} // namespace app::classes::types
