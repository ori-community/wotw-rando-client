#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UInt32 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UInt32__Class** type_info;
        inline app::UInt32__Class* get_class() {
            return il2cpp::get_class<app::UInt32__Class>(type_info, "System", "UInt32");
        }
        inline app::UInt32* create() {
            return il2cpp::create_object<app::UInt32>(get_class());
        }
        inline app::UInt32__Boxed* box(uint32_t value) {
            return il2cpp::box_value<app::UInt32__Boxed>(get_class(), value);
        }
        inline app::UInt32__Array* create_array(int size) {
            return il2cpp::array_new<app::UInt32__Array>(get_class(), size);
        }
    } // namespace UInt32
} // namespace app::classes::types
