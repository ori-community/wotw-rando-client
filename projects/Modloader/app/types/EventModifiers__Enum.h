#pragma once
#include <Modloader/app/structs/EventModifiers__Enum.h>
#include <Modloader/app/structs/EventModifiers__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventModifiers__Enum {
        inline app::EventModifiers__Enum__Class** type_info() {
            static app::EventModifiers__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EventModifiers__Enum__Class**)(modloader::win::memory::resolve_rva(0x04791AB8));
            }
            return cache;
        }
        inline app::EventModifiers__Enum__Class* get_class() {
            return il2cpp::get_class<app::EventModifiers__Enum__Class>(type_info(), "UnityEngine", "EventModifiers");
        }
        inline app::EventModifiers__Enum* create() {
            return il2cpp::create_object<app::EventModifiers__Enum>(get_class());
        }
    } // namespace EventModifiers__Enum
} // namespace app::classes::types
