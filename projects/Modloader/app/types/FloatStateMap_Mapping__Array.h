#pragma once
#include <Modloader/app/structs/FloatStateMap_Mapping__Array.h>
#include <Modloader/app/structs/FloatStateMap_Mapping__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FloatStateMap_Mapping__Array {
        inline app::FloatStateMap_Mapping__Array__Class** type_info() {
            static app::FloatStateMap_Mapping__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FloatStateMap_Mapping__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FloatStateMap_Mapping__Array__Class* get_class() {
            return il2cpp::get_class<app::FloatStateMap_Mapping__Array__Class>(type_info(), "", "FloatStateMap+Mapping[]");
        }
        inline app::FloatStateMap_Mapping__Array* create() {
            return il2cpp::create_object<app::FloatStateMap_Mapping__Array>(get_class());
        }
    } // namespace FloatStateMap_Mapping__Array
} // namespace app::classes::types
