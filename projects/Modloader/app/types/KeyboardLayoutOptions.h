#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/KeyboardLayoutOptions__Class.h>
#include <Modloader/app/structs/KeyboardLayoutOptions.h>

namespace app::classes::types {
    namespace KeyboardLayoutOptions {
        inline app::KeyboardLayoutOptions__Class** type_info = (app::KeyboardLayoutOptions__Class**)(modloader::win::memory::resolve_rva(0x047617C8));
        inline app::KeyboardLayoutOptions__Class* get_class() {
            return il2cpp::get_class<app::KeyboardLayoutOptions__Class>(type_info, "", "KeyboardLayoutOptions");
        }
        inline app::KeyboardLayoutOptions* create() {
            return il2cpp::create_object<app::KeyboardLayoutOptions>(get_class());
        }
    } // namespace KeyboardLayoutOptions
} // namespace app::classes::types
