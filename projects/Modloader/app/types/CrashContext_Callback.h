#pragma once
#include <Modloader/app/structs/CrashContext_Callback.h>
#include <Modloader/app/structs/CrashContext_Callback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CrashContext_Callback {
        inline app::CrashContext_Callback__Class** type_info() {
            static app::CrashContext_Callback__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CrashContext_Callback__Class**)(modloader::win::memory::resolve_rva(0x04723E40));
            }
            return cache;
        }
        inline app::CrashContext_Callback__Class* get_class() {
            return il2cpp::get_nested_class<app::CrashContext_Callback__Class>(type_info(), "Moon", "CrashContext", "Callback");
        }
        inline app::CrashContext_Callback* create() {
            return il2cpp::create_object<app::CrashContext_Callback>(get_class());
        }
    } // namespace CrashContext_Callback
} // namespace app::classes::types
