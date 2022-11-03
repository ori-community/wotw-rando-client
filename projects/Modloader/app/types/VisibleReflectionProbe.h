#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace VisibleReflectionProbe {
        inline app::VisibleReflectionProbe__Class** type_info = (app::VisibleReflectionProbe__Class**)(modloader::win::memory::resolve_rva(0x0472F028));
        inline app::VisibleReflectionProbe__Class* get_class() {
            return il2cpp::get_class<app::VisibleReflectionProbe__Class>(type_info, "UnityEngine.Experimental.Rendering", "VisibleReflectionProbe");
        }
        inline app::VisibleReflectionProbe* create() {
            return il2cpp::create_object<app::VisibleReflectionProbe>(get_class());
        }
        inline app::VisibleReflectionProbe__Boxed* box(app::VisibleReflectionProbe value) {
            return il2cpp::box_value<app::VisibleReflectionProbe__Boxed>(get_class(), value);
        }
        inline app::VisibleReflectionProbe__Array* create_array(int size) {
            return il2cpp::array_new<app::VisibleReflectionProbe__Array>(get_class(), size);
        }
        inline app::VisibleReflectionProbe__Array* create_array(const std::vector<app::VisibleReflectionProbe>& items) {
            return il2cpp::array_new<app::VisibleReflectionProbe__Array>(get_class(), items);
        }
    } // namespace VisibleReflectionProbe
} // namespace app::classes::types
