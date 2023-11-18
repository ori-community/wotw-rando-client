#pragma once
#include <Modloader/app/structs/CrashContext.h>
#include <Modloader/app/structs/CrashContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CrashContext {
        inline app::CrashContext__Class** type_info() {
            static app::CrashContext__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CrashContext__Class**)(modloader::win::memory::resolve_rva(0x04709B70));
            }
            return cache;
        }
        inline app::CrashContext__Class* get_class() {
            return il2cpp::get_class<app::CrashContext__Class>(type_info(), "Moon", "CrashContext");
        }
        inline app::CrashContext* create() {
            return il2cpp::create_object<app::CrashContext>(get_class());
        }
    } // namespace CrashContext
} // namespace app::classes::types
