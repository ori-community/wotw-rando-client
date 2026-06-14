#pragma once
#include <Modloader/app/structs/IButtonInput__Array.h>
#include <Modloader/app/structs/IButtonInput__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IButtonInput__Array {
        inline app::IButtonInput__Array__Class** type_info() {
            static app::IButtonInput__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IButtonInput__Array__Class**)(modloader::win::memory::resolve_rva(0x0475C138));
            }
            return cache;
        }
        inline app::IButtonInput__Array__Class* get_class() {
            return il2cpp::get_class<app::IButtonInput__Array__Class>(type_info(), "SmartInput", "IButtonInput[]");
        }
        inline app::IButtonInput__Array* create() {
            return il2cpp::create_object<app::IButtonInput__Array>(get_class());
        }
    } // namespace IButtonInput__Array
} // namespace app::classes::types
