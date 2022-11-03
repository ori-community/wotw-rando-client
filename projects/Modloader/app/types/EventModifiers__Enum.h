#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EventModifiers__Enum {
        inline app::EventModifiers__Enum__Class** type_info = (app::EventModifiers__Enum__Class**)(modloader::win::memory::resolve_rva(0x04791AB8));
        inline app::EventModifiers__Enum__Class* get_class() {
            return il2cpp::get_class<app::EventModifiers__Enum__Class>(type_info, "UnityEngine", "EventModifiers");
        }
        inline app::EventModifiers__Enum* create() {
            return il2cpp::create_object<app::EventModifiers__Enum>(get_class());
        }
    } // namespace EventModifiers__Enum
} // namespace app::classes::types
