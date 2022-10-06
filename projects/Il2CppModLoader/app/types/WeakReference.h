#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WeakReference {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WeakReference__Class** type_info;
        inline app::WeakReference__Class* get_class() {
            return il2cpp::get_class<app::WeakReference__Class>(type_info, "System", "WeakReference");
        }
        inline app::WeakReference* create() {
            return il2cpp::create_object<app::WeakReference>(get_class());
        }
        inline app::WeakReference__Array* create_array(int size) {
            return il2cpp::array_new<app::WeakReference__Array>(get_class(), size);
        }
        inline app::WeakReference__Array* create_array(const std::vector<app::WeakReference*>& items) {
            return il2cpp::array_new<app::WeakReference__Array>(get_class(), items);
        }
    } // namespace WeakReference
} // namespace app::classes::types
