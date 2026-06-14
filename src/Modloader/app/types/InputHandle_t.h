#pragma once
#include <Modloader/app/structs/InputHandle_t.h>
#include <Modloader/app/structs/InputHandle_t__Array.h>
#include <Modloader/app/structs/InputHandle_t__Boxed.h>
#include <Modloader/app/structs/InputHandle_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InputHandle_t {
        inline app::InputHandle_t__Class** type_info() {
            static app::InputHandle_t__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InputHandle_t__Class**)(modloader::win::memory::resolve_rva(0x047956F8));
            }
            return cache;
        }
        inline app::InputHandle_t__Class* get_class() {
            return il2cpp::get_class<app::InputHandle_t__Class>(type_info(), "Steamworks", "InputHandle_t");
        }
        inline app::InputHandle_t* create() {
            return il2cpp::create_object<app::InputHandle_t>(get_class());
        }
        inline app::InputHandle_t__Boxed* box(app::InputHandle_t value) {
            return il2cpp::box_value<app::InputHandle_t__Boxed>(get_class(), value);
        }
        inline app::InputHandle_t__Array* create_array(int size) {
            return il2cpp::array_new<app::InputHandle_t__Array>(get_class(), size);
        }
        inline app::InputHandle_t__Array* create_array(const std::vector<app::InputHandle_t>& items) {
            return il2cpp::array_new<app::InputHandle_t__Array>(get_class(), items);
        }
    } // namespace InputHandle_t
} // namespace app::classes::types
