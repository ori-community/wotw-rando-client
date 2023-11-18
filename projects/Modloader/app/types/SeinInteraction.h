#pragma once
#include <Modloader/app/structs/SeinInteraction.h>
#include <Modloader/app/structs/SeinInteraction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinInteraction {
        inline app::SeinInteraction__Class** type_info() {
            static app::SeinInteraction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinInteraction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinInteraction__Class* get_class() {
            return il2cpp::get_class<app::SeinInteraction__Class>(type_info(), "", "SeinInteraction");
        }
        inline app::SeinInteraction* create() {
            return il2cpp::create_object<app::SeinInteraction>(get_class());
        }
    } // namespace SeinInteraction
} // namespace app::classes::types
