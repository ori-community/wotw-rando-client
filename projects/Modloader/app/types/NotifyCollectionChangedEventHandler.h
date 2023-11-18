#pragma once
#include <Modloader/app/structs/NotifyCollectionChangedEventHandler.h>
#include <Modloader/app/structs/NotifyCollectionChangedEventHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NotifyCollectionChangedEventHandler {
        inline app::NotifyCollectionChangedEventHandler__Class** type_info() {
            static app::NotifyCollectionChangedEventHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NotifyCollectionChangedEventHandler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NotifyCollectionChangedEventHandler__Class* get_class() {
            return il2cpp::get_class<app::NotifyCollectionChangedEventHandler__Class>(type_info(), "System.Collections.Specialized", "NotifyCollectionChangedEventHandler");
        }
        inline app::NotifyCollectionChangedEventHandler* create() {
            return il2cpp::create_object<app::NotifyCollectionChangedEventHandler>(get_class());
        }
    } // namespace NotifyCollectionChangedEventHandler
} // namespace app::classes::types
