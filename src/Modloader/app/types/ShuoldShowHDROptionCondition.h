#pragma once
#include <Modloader/app/structs/ShuoldShowHDROptionCondition.h>
#include <Modloader/app/structs/ShuoldShowHDROptionCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShuoldShowHDROptionCondition {
        inline app::ShuoldShowHDROptionCondition__Class** type_info() {
            static app::ShuoldShowHDROptionCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShuoldShowHDROptionCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShuoldShowHDROptionCondition__Class* get_class() {
            return il2cpp::get_class<app::ShuoldShowHDROptionCondition__Class>(type_info(), "", "ShuoldShowHDROptionCondition");
        }
        inline app::ShuoldShowHDROptionCondition* create() {
            return il2cpp::create_object<app::ShuoldShowHDROptionCondition>(get_class());
        }
    } // namespace ShuoldShowHDROptionCondition
} // namespace app::classes::types
