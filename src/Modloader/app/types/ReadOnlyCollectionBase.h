#pragma once
#include <Modloader/app/structs/ReadOnlyCollectionBase.h>
#include <Modloader/app/structs/ReadOnlyCollectionBase__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReadOnlyCollectionBase {
        inline app::ReadOnlyCollectionBase__Class** type_info() {
            static app::ReadOnlyCollectionBase__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ReadOnlyCollectionBase__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ReadOnlyCollectionBase__Class* get_class() {
            return il2cpp::get_class<app::ReadOnlyCollectionBase__Class>(type_info(), "System.Collections", "ReadOnlyCollectionBase");
        }
        inline app::ReadOnlyCollectionBase* create() {
            return il2cpp::create_object<app::ReadOnlyCollectionBase>(get_class());
        }
    } // namespace ReadOnlyCollectionBase
} // namespace app::classes::types
