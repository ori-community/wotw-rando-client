#pragma once
#include <Modloader/app/structs/KeyCodeButtonInput.h>
#include <Modloader/app/structs/KeyCodeButtonInput__Array.h>
#include <Modloader/app/structs/KeyCodeButtonInput__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KeyCodeButtonInput {
        inline app::KeyCodeButtonInput__Class** type_info() {
            static app::KeyCodeButtonInput__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::KeyCodeButtonInput__Class**)(modloader::win::memory::resolve_rva(0x04780B68));
            }
            return cache;
        }
        inline app::KeyCodeButtonInput__Class* get_class() {
            return il2cpp::get_class<app::KeyCodeButtonInput__Class>(type_info(), "SmartInput", "KeyCodeButtonInput");
        }
        inline app::KeyCodeButtonInput* create() {
            return il2cpp::create_object<app::KeyCodeButtonInput>(get_class());
        }
        inline app::KeyCodeButtonInput__Array* create_array(int size) {
            return il2cpp::array_new<app::KeyCodeButtonInput__Array>(get_class(), size);
        }
        inline app::KeyCodeButtonInput__Array* create_array(const std::vector<app::KeyCodeButtonInput*>& items) {
            return il2cpp::array_new<app::KeyCodeButtonInput__Array>(get_class(), items);
        }
    } // namespace KeyCodeButtonInput
} // namespace app::classes::types
