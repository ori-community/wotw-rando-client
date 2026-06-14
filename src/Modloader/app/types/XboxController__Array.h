#pragma once
#include <Modloader/app/structs/XboxController__Array.h>
#include <Modloader/app/structs/XboxController__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XboxController__Array {
        inline app::XboxController__Array__Class** type_info() {
            static app::XboxController__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XboxController__Array__Class**)(modloader::win::memory::resolve_rva(0x0476E410));
            }
            return cache;
        }
        inline app::XboxController__Array__Class* get_class() {
            return il2cpp::get_class<app::XboxController__Array__Class>(type_info(), "J2i.Net.XInputWrapper", "XboxController[]");
        }
        inline app::XboxController__Array* create() {
            return il2cpp::create_object<app::XboxController__Array>(get_class());
        }
    } // namespace XboxController__Array
} // namespace app::classes::types
