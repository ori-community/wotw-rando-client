#pragma once
#include <Modloader/app/structs/KeyHandler.h>
#include <Modloader/app/structs/KeyHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KeyHandler {
        inline app::KeyHandler__Class** type_info() {
            static app::KeyHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::KeyHandler__Class**)(modloader::win::memory::resolve_rva(0x04704E38));
            }
            return cache;
        }
        inline app::KeyHandler__Class* get_class() {
            return il2cpp::get_class<app::KeyHandler__Class>(type_info(), "Microsoft.Win32", "KeyHandler");
        }
        inline app::KeyHandler* create() {
            return il2cpp::create_object<app::KeyHandler>(get_class());
        }
    } // namespace KeyHandler
} // namespace app::classes::types
