#pragma once
#include <Modloader/app/structs/BaseGroupType.h>
#include <Modloader/app/structs/BaseGroupType__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BaseGroupType {
        inline app::BaseGroupType__Class** type_info() {
            static app::BaseGroupType__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BaseGroupType__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BaseGroupType__Class* get_class() {
            return il2cpp::get_class<app::BaseGroupType__Class>(type_info(), "AK.Wwise", "BaseGroupType");
        }
        inline app::BaseGroupType* create() {
            return il2cpp::create_object<app::BaseGroupType>(get_class());
        }
    } // namespace BaseGroupType
} // namespace app::classes::types
