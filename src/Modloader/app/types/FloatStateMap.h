#pragma once
#include <Modloader/app/structs/FloatStateMap.h>
#include <Modloader/app/structs/FloatStateMap__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FloatStateMap {
        inline app::FloatStateMap__Class** type_info() {
            static app::FloatStateMap__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FloatStateMap__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FloatStateMap__Class* get_class() {
            return il2cpp::get_class<app::FloatStateMap__Class>(type_info(), "", "FloatStateMap");
        }
        inline app::FloatStateMap* create() {
            return il2cpp::create_object<app::FloatStateMap>(get_class());
        }
    } // namespace FloatStateMap
} // namespace app::classes::types
