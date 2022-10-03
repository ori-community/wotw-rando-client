#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberPoolItem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberPoolItem__Class** type_info;
        inline app::UberPoolItem__Class* get_class() {
            return il2cpp::get_class<app::UberPoolItem__Class>(type_info, "", "UberPoolItem");
        }
        inline app::UberPoolItem* create() {
            return il2cpp::create_object<app::UberPoolItem>(get_class());
        }
        inline app::UberPoolItem__Array* create_array(int size) {
            return il2cpp::array_new<app::UberPoolItem__Array>(get_class(), size);
        }
    } // namespace UberPoolItem
} // namespace app::classes::types
