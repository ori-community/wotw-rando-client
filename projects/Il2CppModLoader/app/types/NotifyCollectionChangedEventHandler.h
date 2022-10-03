#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NotifyCollectionChangedEventHandler {
        namespace {
            app::NotifyCollectionChangedEventHandler__Class* type_info_ref = nullptr;
        }
        app::NotifyCollectionChangedEventHandler__Class** type_info = &type_info_ref;
        inline app::NotifyCollectionChangedEventHandler__Class* get_class() {
            return il2cpp::get_class<app::NotifyCollectionChangedEventHandler__Class>(type_info, "System.Collections.Specialized", "NotifyCollectionChangedEventHandler");
        }
        inline app::NotifyCollectionChangedEventHandler* create() {
            return il2cpp::create_object<app::NotifyCollectionChangedEventHandler>(get_class());
        }
    } // namespace NotifyCollectionChangedEventHandler
} // namespace app::classes::types
