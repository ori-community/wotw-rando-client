#pragma once
#include <Modloader/app/structs/MothFleeCondition.h>
#include <Modloader/app/structs/MothFleeCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MothFleeCondition {
        inline app::MothFleeCondition__Class** type_info() {
            static app::MothFleeCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MothFleeCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MothFleeCondition__Class* get_class() {
            return il2cpp::get_class<app::MothFleeCondition__Class>(type_info(), "Moon.Behaviour", "MothFleeCondition");
        }
        inline app::MothFleeCondition* create() {
            return il2cpp::create_object<app::MothFleeCondition>(get_class());
        }
    } // namespace MothFleeCondition
} // namespace app::classes::types
