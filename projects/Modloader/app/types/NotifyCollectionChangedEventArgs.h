#pragma once
#include <Modloader/app/structs/NotifyCollectionChangedEventArgs.h>
#include <Modloader/app/structs/NotifyCollectionChangedEventArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NotifyCollectionChangedEventArgs {
        inline app::NotifyCollectionChangedEventArgs__Class** type_info() {
            static app::NotifyCollectionChangedEventArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NotifyCollectionChangedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04748660));
            }
            return cache;
        }
        inline app::NotifyCollectionChangedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::NotifyCollectionChangedEventArgs__Class>(type_info(), "System.Collections.Specialized", "NotifyCollectionChangedEventArgs");
        }
        inline app::NotifyCollectionChangedEventArgs* create() {
            return il2cpp::create_object<app::NotifyCollectionChangedEventArgs>(get_class());
        }
    } // namespace NotifyCollectionChangedEventArgs
} // namespace app::classes::types
