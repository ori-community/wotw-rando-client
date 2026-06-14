#pragma once
#include <Modloader/app/structs/AkMIDIEventTypes__Enum.h>
#include <Modloader/app/structs/AkMIDIEventTypes__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkMIDIEventTypes__Enum {
        inline app::AkMIDIEventTypes__Enum__Class** type_info() {
            static app::AkMIDIEventTypes__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkMIDIEventTypes__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkMIDIEventTypes__Enum__Class* get_class() {
            return il2cpp::get_class<app::AkMIDIEventTypes__Enum__Class>(type_info(), "", "AkMIDIEventTypes");
        }
        inline app::AkMIDIEventTypes__Enum* create() {
            return il2cpp::create_object<app::AkMIDIEventTypes__Enum>(get_class());
        }
    } // namespace AkMIDIEventTypes__Enum
} // namespace app::classes::types
