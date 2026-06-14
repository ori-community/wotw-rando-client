#pragma once
#include <Modloader/app/structs/BaseType.h>
#include <Modloader/app/structs/BaseType__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BaseType {
        inline app::BaseType__Class** type_info() {
            static app::BaseType__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BaseType__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BaseType__Class* get_class() {
            return il2cpp::get_class<app::BaseType__Class>(type_info(), "AK.Wwise", "BaseType");
        }
        inline app::BaseType* create() {
            return il2cpp::create_object<app::BaseType>(get_class());
        }
    } // namespace BaseType
} // namespace app::classes::types
