#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GCHandle {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GCHandle__Class** type_info;
        inline app::GCHandle__Class* get_class() {
            return il2cpp::get_class<app::GCHandle__Class>(type_info, "System.Runtime.InteropServices", "GCHandle");
        }
        inline app::GCHandle* create() {
            return il2cpp::create_object<app::GCHandle>(get_class());
        }
        inline app::GCHandle__Boxed* box(app::GCHandle value) {
            return il2cpp::box_value<app::GCHandle__Boxed>(get_class(), value);
        }
        inline app::GCHandle__Array* create_array(int size) {
            return il2cpp::array_new<app::GCHandle__Array>(get_class(), size);
        }
        inline app::GCHandle__Array* create_array(const std::vector<app::GCHandle>& items) {
            return il2cpp::array_new<app::GCHandle__Array>(get_class(), items);
        }
    } // namespace GCHandle
} // namespace app::classes::types
