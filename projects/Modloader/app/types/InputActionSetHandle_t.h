#pragma once
#include <Modloader/app/structs/InputActionSetHandle_t.h>
#include <Modloader/app/structs/InputActionSetHandle_t__Array.h>
#include <Modloader/app/structs/InputActionSetHandle_t__Boxed.h>
#include <Modloader/app/structs/InputActionSetHandle_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InputActionSetHandle_t {
        inline app::InputActionSetHandle_t__Class** type_info() {
            static app::InputActionSetHandle_t__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InputActionSetHandle_t__Class**)(modloader::win::memory::resolve_rva(0x0474ACB0));
            }
            return cache;
        }
        inline app::InputActionSetHandle_t__Class* get_class() {
            return il2cpp::get_class<app::InputActionSetHandle_t__Class>(type_info(), "Steamworks", "InputActionSetHandle_t");
        }
        inline app::InputActionSetHandle_t* create() {
            return il2cpp::create_object<app::InputActionSetHandle_t>(get_class());
        }
        inline app::InputActionSetHandle_t__Boxed* box(app::InputActionSetHandle_t value) {
            return il2cpp::box_value<app::InputActionSetHandle_t__Boxed>(get_class(), value);
        }
        inline app::InputActionSetHandle_t__Array* create_array(int size) {
            return il2cpp::array_new<app::InputActionSetHandle_t__Array>(get_class(), size);
        }
        inline app::InputActionSetHandle_t__Array* create_array(const std::vector<app::InputActionSetHandle_t>& items) {
            return il2cpp::array_new<app::InputActionSetHandle_t__Array>(get_class(), items);
        }
    } // namespace InputActionSetHandle_t
} // namespace app::classes::types
