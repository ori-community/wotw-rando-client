#pragma once
#include <Modloader/app/structs/FrogGroup.h>
#include <Modloader/app/structs/FrogGroup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FrogGroup {
        inline app::FrogGroup__Class** type_info() {
            static app::FrogGroup__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FrogGroup__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FrogGroup__Class* get_class() {
            return il2cpp::get_class<app::FrogGroup__Class>(type_info(), "", "FrogGroup");
        }
        inline app::FrogGroup* create() {
            return il2cpp::create_object<app::FrogGroup>(get_class());
        }
    } // namespace FrogGroup
} // namespace app::classes::types
