#pragma once
#include <Modloader/app/structs/ButtonAxisInput.h>
#include <Modloader/app/structs/ButtonAxisInput__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ButtonAxisInput {
        inline app::ButtonAxisInput__Class** type_info() {
            static app::ButtonAxisInput__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ButtonAxisInput__Class**)(modloader::win::memory::resolve_rva(0x04742E78));
            }
            return cache;
        }
        inline app::ButtonAxisInput__Class* get_class() {
            return il2cpp::get_class<app::ButtonAxisInput__Class>(type_info(), "SmartInput", "ButtonAxisInput");
        }
        inline app::ButtonAxisInput* create() {
            return il2cpp::create_object<app::ButtonAxisInput>(get_class());
        }
    } // namespace ButtonAxisInput
} // namespace app::classes::types
