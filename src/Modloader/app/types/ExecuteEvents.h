#pragma once
#include <Modloader/app/structs/ExecuteEvents.h>
#include <Modloader/app/structs/ExecuteEvents__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExecuteEvents {
        inline app::ExecuteEvents__Class** type_info() {
            static app::ExecuteEvents__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ExecuteEvents__Class**)(modloader::win::memory::resolve_rva(0x04755FD0));
            }
            return cache;
        }
        inline app::ExecuteEvents__Class* get_class() {
            return il2cpp::get_class<app::ExecuteEvents__Class>(type_info(), "UnityEngine.EventSystems", "ExecuteEvents");
        }
        inline app::ExecuteEvents* create() {
            return il2cpp::create_object<app::ExecuteEvents>(get_class());
        }
    } // namespace ExecuteEvents
} // namespace app::classes::types
