#pragma once
#include <Modloader/app/structs/InputDigitalActionHandle_t.h>
#include <Modloader/app/structs/InputDigitalActionHandle_t__Boxed.h>
#include <Modloader/app/structs/InputDigitalActionHandle_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InputDigitalActionHandle_t {
        inline app::InputDigitalActionHandle_t__Class** type_info() {
            static app::InputDigitalActionHandle_t__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InputDigitalActionHandle_t__Class**)(modloader::win::memory::resolve_rva(0x0473E768));
            }
            return cache;
        }
        inline app::InputDigitalActionHandle_t__Class* get_class() {
            return il2cpp::get_class<app::InputDigitalActionHandle_t__Class>(type_info(), "Steamworks", "InputDigitalActionHandle_t");
        }
        inline app::InputDigitalActionHandle_t* create() {
            return il2cpp::create_object<app::InputDigitalActionHandle_t>(get_class());
        }
        inline app::InputDigitalActionHandle_t__Boxed* box(app::InputDigitalActionHandle_t value) {
            return il2cpp::box_value<app::InputDigitalActionHandle_t__Boxed>(get_class(), value);
        }
    } // namespace InputDigitalActionHandle_t
} // namespace app::classes::types
