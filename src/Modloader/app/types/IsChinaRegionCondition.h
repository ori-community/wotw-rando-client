#pragma once
#include <Modloader/app/structs/IsChinaRegionCondition.h>
#include <Modloader/app/structs/IsChinaRegionCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IsChinaRegionCondition {
        inline app::IsChinaRegionCondition__Class** type_info() {
            static app::IsChinaRegionCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IsChinaRegionCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IsChinaRegionCondition__Class* get_class() {
            return il2cpp::get_class<app::IsChinaRegionCondition__Class>(type_info(), "", "IsChinaRegionCondition");
        }
        inline app::IsChinaRegionCondition* create() {
            return il2cpp::create_object<app::IsChinaRegionCondition>(get_class());
        }
    } // namespace IsChinaRegionCondition
} // namespace app::classes::types
