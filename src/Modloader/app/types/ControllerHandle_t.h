#pragma once
#include <Modloader/app/structs/ControllerHandle_t.h>
#include <Modloader/app/structs/ControllerHandle_t__Array.h>
#include <Modloader/app/structs/ControllerHandle_t__Boxed.h>
#include <Modloader/app/structs/ControllerHandle_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ControllerHandle_t {
        inline app::ControllerHandle_t__Class** type_info() {
            static app::ControllerHandle_t__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ControllerHandle_t__Class**)(modloader::win::memory::resolve_rva(0x04747F28));
            }
            return cache;
        }
        inline app::ControllerHandle_t__Class* get_class() {
            return il2cpp::get_class<app::ControllerHandle_t__Class>(type_info(), "Steamworks", "ControllerHandle_t");
        }
        inline app::ControllerHandle_t* create() {
            return il2cpp::create_object<app::ControllerHandle_t>(get_class());
        }
        inline app::ControllerHandle_t__Boxed* box(app::ControllerHandle_t value) {
            return il2cpp::box_value<app::ControllerHandle_t__Boxed>(get_class(), value);
        }
        inline app::ControllerHandle_t__Array* create_array(int size) {
            return il2cpp::array_new<app::ControllerHandle_t__Array>(get_class(), size);
        }
        inline app::ControllerHandle_t__Array* create_array(const std::vector<app::ControllerHandle_t>& items) {
            return il2cpp::array_new<app::ControllerHandle_t__Array>(get_class(), items);
        }
    } // namespace ControllerHandle_t
} // namespace app::classes::types
