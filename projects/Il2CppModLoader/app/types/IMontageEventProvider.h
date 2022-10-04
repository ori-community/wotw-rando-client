#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IMontageEventProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IMontageEventProvider__Class** type_info;
        inline app::IMontageEventProvider__Class* get_class() {
            return il2cpp::get_class<app::IMontageEventProvider__Class>(type_info, "", "IMontageEventProvider");
        }
        inline app::IMontageEventProvider* create() {
            return il2cpp::create_object<app::IMontageEventProvider>(get_class());
        }
        inline app::IMontageEventProvider__Array* create_array(int size) {
            return il2cpp::array_new<app::IMontageEventProvider__Array>(get_class(), size);
        }
    } // namespace IMontageEventProvider
} // namespace app::classes::types
