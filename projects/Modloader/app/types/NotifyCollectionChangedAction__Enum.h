#pragma once
#include <Modloader/app/structs/NotifyCollectionChangedAction__Enum.h>
#include <Modloader/app/structs/NotifyCollectionChangedAction__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NotifyCollectionChangedAction__Enum {
        inline app::NotifyCollectionChangedAction__Enum__Class** type_info() {
            static app::NotifyCollectionChangedAction__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NotifyCollectionChangedAction__Enum__Class**)(modloader::win::memory::resolve_rva(0x0475A190));
            }
            return cache;
        }
        inline app::NotifyCollectionChangedAction__Enum__Class* get_class() {
            return il2cpp::get_class<app::NotifyCollectionChangedAction__Enum__Class>(type_info(), "System.Collections.Specialized", "NotifyCollectionChangedAction");
        }
        inline app::NotifyCollectionChangedAction__Enum* create() {
            return il2cpp::create_object<app::NotifyCollectionChangedAction__Enum>(get_class());
        }
    } // namespace NotifyCollectionChangedAction__Enum
} // namespace app::classes::types
