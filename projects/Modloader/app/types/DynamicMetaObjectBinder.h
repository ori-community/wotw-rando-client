#pragma once
#include <Modloader/app/structs/DynamicMetaObjectBinder.h>
#include <Modloader/app/structs/DynamicMetaObjectBinder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DynamicMetaObjectBinder {
        inline app::DynamicMetaObjectBinder__Class** type_info() {
            static app::DynamicMetaObjectBinder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DynamicMetaObjectBinder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DynamicMetaObjectBinder__Class* get_class() {
            return il2cpp::get_class<app::DynamicMetaObjectBinder__Class>(type_info(), "System.Dynamic", "DynamicMetaObjectBinder");
        }
        inline app::DynamicMetaObjectBinder* create() {
            return il2cpp::create_object<app::DynamicMetaObjectBinder>(get_class());
        }
    } // namespace DynamicMetaObjectBinder
} // namespace app::classes::types
