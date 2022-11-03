#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Bounds {
        inline app::Bounds__Class** type_info = (app::Bounds__Class**)(modloader::win::memory::resolve_rva(0x047893A0));
        inline app::Bounds__Class* get_class() {
            return il2cpp::get_class<app::Bounds__Class>(type_info, "UnityEngine", "Bounds");
        }
        inline app::Bounds* create() {
            return il2cpp::create_object<app::Bounds>(get_class());
        }
        inline app::Bounds__Boxed* box(app::Bounds value) {
            return il2cpp::box_value<app::Bounds__Boxed>(get_class(), value);
        }
        inline app::Bounds__Array* create_array(int size) {
            return il2cpp::array_new<app::Bounds__Array>(get_class(), size);
        }
        inline app::Bounds__Array* create_array(const std::vector<app::Bounds>& items) {
            return il2cpp::array_new<app::Bounds__Array>(get_class(), items);
        }
    } // namespace Bounds
} // namespace app::classes::types
