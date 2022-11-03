#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NotifyCollectionChangedEventArgs {
        inline app::NotifyCollectionChangedEventArgs__Class** type_info = (app::NotifyCollectionChangedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04748660));
        inline app::NotifyCollectionChangedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::NotifyCollectionChangedEventArgs__Class>(type_info, "System.Collections.Specialized", "NotifyCollectionChangedEventArgs");
        }
        inline app::NotifyCollectionChangedEventArgs* create() {
            return il2cpp::create_object<app::NotifyCollectionChangedEventArgs>(get_class());
        }
    } // namespace NotifyCollectionChangedEventArgs
} // namespace app::classes::types
