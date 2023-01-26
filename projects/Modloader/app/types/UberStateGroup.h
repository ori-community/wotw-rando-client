#pragma once
#include <Modloader/app/structs/UberStateGroup.h>
#include <Modloader/app/structs/UberStateGroup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberStateGroup {
        inline app::UberStateGroup__Class** type_info() {
            static app::UberStateGroup__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberStateGroup__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberStateGroup__Class* get_class() {
            return il2cpp::get_class<app::UberStateGroup__Class>(type_info(), "Moon", "UberStateGroup");
        }
        inline app::UberStateGroup* create() {
            return il2cpp::create_object<app::UberStateGroup>(get_class());
        }
    } // namespace UberStateGroup
} // namespace app::classes::types
