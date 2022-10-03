#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberPoolGroupWarmer_PrewarmItem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberPoolGroupWarmer_PrewarmItem__Class** type_info;
        inline app::UberPoolGroupWarmer_PrewarmItem__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPoolGroupWarmer_PrewarmItem__Class>(type_info, "", "UberPoolGroupWarmer", "PrewarmItem");
        }
        inline app::UberPoolGroupWarmer_PrewarmItem* create() {
            return il2cpp::create_object<app::UberPoolGroupWarmer_PrewarmItem>(get_class());
        }
        inline app::UberPoolGroupWarmer_PrewarmItem__Boxed* box(app::UberPoolGroupWarmer_PrewarmItem value) {
            return il2cpp::box_value<app::UberPoolGroupWarmer_PrewarmItem__Boxed>(get_class(), value);
        }
        inline app::UberPoolGroupWarmer_PrewarmItem__Array* create_array(int size) {
            return il2cpp::array_new<app::UberPoolGroupWarmer_PrewarmItem__Array>(get_class(), size);
        }
    } // namespace UberPoolGroupWarmer_PrewarmItem
} // namespace app::classes::types
