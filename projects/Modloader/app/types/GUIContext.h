#pragma once
#include <Modloader/app/structs/GUIContext.h>
#include <Modloader/app/structs/GUIContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GUIContext {
        inline app::GUIContext__Class** type_info() {
            static app::GUIContext__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GUIContext__Class**)(modloader::win::memory::resolve_rva(0x0474C230));
            }
            return cache;
        }
        inline app::GUIContext__Class* get_class() {
            return il2cpp::get_class<app::GUIContext__Class>(type_info(), "Sini.Unity", "GUIContext");
        }
        inline app::GUIContext* create() {
            return il2cpp::create_object<app::GUIContext>(get_class());
        }
    } // namespace GUIContext
} // namespace app::classes::types
