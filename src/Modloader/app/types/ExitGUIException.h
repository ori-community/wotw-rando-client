#pragma once
#include <Modloader/app/structs/ExitGUIException.h>
#include <Modloader/app/structs/ExitGUIException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExitGUIException {
        inline app::ExitGUIException__Class** type_info() {
            static app::ExitGUIException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ExitGUIException__Class**)(modloader::win::memory::resolve_rva(0x04721908));
            }
            return cache;
        }
        inline app::ExitGUIException__Class* get_class() {
            return il2cpp::get_class<app::ExitGUIException__Class>(type_info(), "UnityEngine", "ExitGUIException");
        }
        inline app::ExitGUIException* create() {
            return il2cpp::create_object<app::ExitGUIException>(get_class());
        }
    } // namespace ExitGUIException
} // namespace app::classes::types
