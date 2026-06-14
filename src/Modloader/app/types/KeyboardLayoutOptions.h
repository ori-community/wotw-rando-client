#pragma once
#include <Modloader/app/structs/KeyboardLayoutOptions.h>
#include <Modloader/app/structs/KeyboardLayoutOptions__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KeyboardLayoutOptions {
        inline app::KeyboardLayoutOptions__Class** type_info() {
            static app::KeyboardLayoutOptions__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::KeyboardLayoutOptions__Class**)(modloader::win::memory::resolve_rva(0x047617C8));
            }
            return cache;
        }
        inline app::KeyboardLayoutOptions__Class* get_class() {
            return il2cpp::get_class<app::KeyboardLayoutOptions__Class>(type_info(), "", "KeyboardLayoutOptions");
        }
        inline app::KeyboardLayoutOptions* create() {
            return il2cpp::create_object<app::KeyboardLayoutOptions>(get_class());
        }
    } // namespace KeyboardLayoutOptions
} // namespace app::classes::types
