#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NotifyCollectionChangedEventArgs {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NotifyCollectionChangedEventArgs__Class** type_info;
        inline app::NotifyCollectionChangedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::NotifyCollectionChangedEventArgs__Class>(type_info, "System.Collections.Specialized", "NotifyCollectionChangedEventArgs");
        }
        inline app::NotifyCollectionChangedEventArgs* create() {
            return il2cpp::create_object<app::NotifyCollectionChangedEventArgs>(get_class());
        }
    } // namespace NotifyCollectionChangedEventArgs
} // namespace app::classes::types
