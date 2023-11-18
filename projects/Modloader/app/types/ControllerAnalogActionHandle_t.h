#pragma once
#include <Modloader/app/structs/ControllerAnalogActionHandle_t.h>
#include <Modloader/app/structs/ControllerAnalogActionHandle_t__Boxed.h>
#include <Modloader/app/structs/ControllerAnalogActionHandle_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ControllerAnalogActionHandle_t {
        inline app::ControllerAnalogActionHandle_t__Class** type_info() {
            static app::ControllerAnalogActionHandle_t__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ControllerAnalogActionHandle_t__Class**)(modloader::win::memory::resolve_rva(0x04761648));
            }
            return cache;
        }
        inline app::ControllerAnalogActionHandle_t__Class* get_class() {
            return il2cpp::get_class<app::ControllerAnalogActionHandle_t__Class>(type_info(), "Steamworks", "ControllerAnalogActionHandle_t");
        }
        inline app::ControllerAnalogActionHandle_t* create() {
            return il2cpp::create_object<app::ControllerAnalogActionHandle_t>(get_class());
        }
        inline app::ControllerAnalogActionHandle_t__Boxed* box(app::ControllerAnalogActionHandle_t value) {
            return il2cpp::box_value<app::ControllerAnalogActionHandle_t__Boxed>(get_class(), value);
        }
    } // namespace ControllerAnalogActionHandle_t
} // namespace app::classes::types
