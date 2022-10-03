#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BitVector32 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BitVector32__Class** type_info;
        inline app::BitVector32__Class* get_class() {
            return il2cpp::get_class<app::BitVector32__Class>(type_info, "System.Collections.Specialized", "BitVector32");
        }
        inline app::BitVector32* create() {
            return il2cpp::create_object<app::BitVector32>(get_class());
        }
        inline app::BitVector32__Boxed* box(app::BitVector32 value) {
            return il2cpp::box_value<app::BitVector32__Boxed>(get_class(), value);
        }
    } // namespace BitVector32
} // namespace app::classes::types
