#pragma once
#include <Modloader/app/structs/InputAnalogActionHandle_t.h>
#include <Modloader/app/structs/InputAnalogActionHandle_t__Boxed.h>
#include <Modloader/app/structs/InputAnalogActionHandle_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InputAnalogActionHandle_t {
        inline app::InputAnalogActionHandle_t__Class** type_info() {
            static app::InputAnalogActionHandle_t__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InputAnalogActionHandle_t__Class**)(modloader::win::memory::resolve_rva(0x04762810));
            }
            return cache;
        }
        inline app::InputAnalogActionHandle_t__Class* get_class() {
            return il2cpp::get_class<app::InputAnalogActionHandle_t__Class>(type_info(), "Steamworks", "InputAnalogActionHandle_t");
        }
        inline app::InputAnalogActionHandle_t* create() {
            return il2cpp::create_object<app::InputAnalogActionHandle_t>(get_class());
        }
        inline app::InputAnalogActionHandle_t__Boxed* box(app::InputAnalogActionHandle_t value) {
            return il2cpp::box_value<app::InputAnalogActionHandle_t__Boxed>(get_class(), value);
        }
    } // namespace InputAnalogActionHandle_t
} // namespace app::classes::types
