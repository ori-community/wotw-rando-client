#pragma once
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Color__Array.h>
#include <Modloader/app/structs/Color__Boxed.h>
#include <Modloader/app/structs/Color__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Color {
        inline app::Color__Class** type_info() {
            static app::Color__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Color__Class**)(modloader::win::memory::resolve_rva(0x0473C110));
            }
            return cache;
        }
        inline app::Color__Class* get_class() {
            return il2cpp::get_class<app::Color__Class>(type_info(), "UnityEngine", "Color");
        }
        inline app::Color* create() {
            return il2cpp::create_object<app::Color>(get_class());
        }
        inline app::Color__Boxed* box(app::Color value) {
            return il2cpp::box_value<app::Color__Boxed>(get_class(), value);
        }
        inline app::Color__Array* create_array(int size) {
            return il2cpp::array_new<app::Color__Array>(get_class(), size);
        }
        inline app::Color__Array* create_array(const std::vector<app::Color>& items) {
            return il2cpp::array_new<app::Color__Array>(get_class(), items);
        }
    } // namespace Color
} // namespace app::classes::types
