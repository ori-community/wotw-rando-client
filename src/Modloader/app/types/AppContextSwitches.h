#pragma once
#include <Modloader/app/structs/AppContextSwitches.h>
#include <Modloader/app/structs/AppContextSwitches__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AppContextSwitches {
        inline app::AppContextSwitches__Class** type_info() {
            static app::AppContextSwitches__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AppContextSwitches__Class**)(modloader::win::memory::resolve_rva(0x04784528));
            }
            return cache;
        }
        inline app::AppContextSwitches__Class* get_class() {
            return il2cpp::get_class<app::AppContextSwitches__Class>(type_info(), "System", "AppContextSwitches");
        }
        inline app::AppContextSwitches* create() {
            return il2cpp::create_object<app::AppContextSwitches>(get_class());
        }
    } // namespace AppContextSwitches
} // namespace app::classes::types
