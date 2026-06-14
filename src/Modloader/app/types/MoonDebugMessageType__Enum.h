#pragma once
#include <Modloader/app/structs/MoonDebugMessageType__Enum.h>
#include <Modloader/app/structs/MoonDebugMessageType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonDebugMessageType__Enum {
        inline app::MoonDebugMessageType__Enum__Class** type_info() {
            static app::MoonDebugMessageType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonDebugMessageType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04741C70));
            }
            return cache;
        }
        inline app::MoonDebugMessageType__Enum__Class* get_class() {
            return il2cpp::get_class<app::MoonDebugMessageType__Enum__Class>(type_info(), "Moon", "MoonDebugMessageType");
        }
        inline app::MoonDebugMessageType__Enum* create() {
            return il2cpp::create_object<app::MoonDebugMessageType__Enum>(get_class());
        }
    } // namespace MoonDebugMessageType__Enum
} // namespace app::classes::types
