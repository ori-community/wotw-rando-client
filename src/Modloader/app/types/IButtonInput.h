#pragma once
#include <Modloader/app/structs/IButtonInput.h>
#include <Modloader/app/structs/IButtonInput__Array.h>
#include <Modloader/app/structs/IButtonInput__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IButtonInput {
        inline app::IButtonInput__Class** type_info() {
            static app::IButtonInput__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IButtonInput__Class**)(modloader::win::memory::resolve_rva(0x04780F50));
            }
            return cache;
        }
        inline app::IButtonInput__Class* get_class() {
            return il2cpp::get_class<app::IButtonInput__Class>(type_info(), "SmartInput", "IButtonInput");
        }
        inline app::IButtonInput__Array* create_array(int size) {
            return il2cpp::array_new<app::IButtonInput__Array>(get_class(), size);
        }
        inline app::IButtonInput__Array* create_array(const std::vector<app::IButtonInput*>& items) {
            return il2cpp::array_new<app::IButtonInput__Array>(get_class(), items);
        }
    } // namespace IButtonInput
} // namespace app::classes::types
