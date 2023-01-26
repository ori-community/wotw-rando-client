#pragma once
#include <Modloader/app/structs/MonoEvent.h>
#include <Modloader/app/structs/MonoEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MonoEvent {
        inline app::MonoEvent__Class** type_info() {
            static app::MonoEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MonoEvent__Class**)(modloader::win::memory::resolve_rva(0x04702400));
            }
            return cache;
        }
        inline app::MonoEvent__Class* get_class() {
            return il2cpp::get_class<app::MonoEvent__Class>(type_info(), "System.Reflection", "MonoEvent");
        }
        inline app::MonoEvent* create() {
            return il2cpp::create_object<app::MonoEvent>(get_class());
        }
    } // namespace MonoEvent
} // namespace app::classes::types
