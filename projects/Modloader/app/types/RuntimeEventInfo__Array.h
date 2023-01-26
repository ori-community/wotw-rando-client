#pragma once
#include <Modloader/app/structs/RuntimeEventInfo__Array.h>
#include <Modloader/app/structs/RuntimeEventInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RuntimeEventInfo__Array {
        inline app::RuntimeEventInfo__Array__Class** type_info() {
            static app::RuntimeEventInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RuntimeEventInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x0476B2A0));
            }
            return cache;
        }
        inline app::RuntimeEventInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::RuntimeEventInfo__Array__Class>(type_info(), "System.Reflection", "RuntimeEventInfo[]");
        }
        inline app::RuntimeEventInfo__Array* create() {
            return il2cpp::create_object<app::RuntimeEventInfo__Array>(get_class());
        }
    } // namespace RuntimeEventInfo__Array
} // namespace app::classes::types
