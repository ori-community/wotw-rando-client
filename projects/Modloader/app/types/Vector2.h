#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Vector2 {
        inline app::Vector2__Class** type_info = (app::Vector2__Class**)(modloader::win::memory::resolve_rva(0x04736248));
        inline app::Vector2__Class* get_class() {
            return il2cpp::get_class<app::Vector2__Class>(type_info, "UnityEngine", "Vector2");
        }
        inline app::Vector2* create() {
            return il2cpp::create_object<app::Vector2>(get_class());
        }
        inline app::Vector2__Boxed* box(app::Vector2 value) {
            return il2cpp::box_value<app::Vector2__Boxed>(get_class(), value);
        }
        inline app::Vector2__Array* create_array(int size) {
            return il2cpp::array_new<app::Vector2__Array>(get_class(), size);
        }
        inline app::Vector2__Array* create_array(const std::vector<app::Vector2>& items) {
            return il2cpp::array_new<app::Vector2__Array>(get_class(), items);
        }
    } // namespace Vector2
} // namespace app::classes::types
