#pragma once
#include <Modloader/app/structs/NameObjectCollectionBase.h>
#include <Modloader/app/structs/NameObjectCollectionBase__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NameObjectCollectionBase {
        inline app::NameObjectCollectionBase__Class** type_info() {
            static app::NameObjectCollectionBase__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NameObjectCollectionBase__Class**)(modloader::win::memory::resolve_rva(0x0478A8F0));
            }
            return cache;
        }
        inline app::NameObjectCollectionBase__Class* get_class() {
            return il2cpp::get_class<app::NameObjectCollectionBase__Class>(type_info(), "System.Collections.Specialized", "NameObjectCollectionBase");
        }
        inline app::NameObjectCollectionBase* create() {
            return il2cpp::create_object<app::NameObjectCollectionBase>(get_class());
        }
    } // namespace NameObjectCollectionBase
} // namespace app::classes::types
