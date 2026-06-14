#pragma once
#include <Modloader/app/structs/CollectionBase.h>
#include <Modloader/app/structs/CollectionBase__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CollectionBase {
        inline app::CollectionBase__Class** type_info() {
            static app::CollectionBase__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CollectionBase__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CollectionBase__Class* get_class() {
            return il2cpp::get_class<app::CollectionBase__Class>(type_info(), "System.Collections", "CollectionBase");
        }
        inline app::CollectionBase* create() {
            return il2cpp::create_object<app::CollectionBase>(get_class());
        }
    } // namespace CollectionBase
} // namespace app::classes::types
