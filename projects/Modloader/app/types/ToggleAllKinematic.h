#pragma once
#include <Modloader/app/structs/ToggleAllKinematic.h>
#include <Modloader/app/structs/ToggleAllKinematic__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ToggleAllKinematic {
        inline app::ToggleAllKinematic__Class** type_info() {
            static app::ToggleAllKinematic__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ToggleAllKinematic__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ToggleAllKinematic__Class* get_class() {
            return il2cpp::get_class<app::ToggleAllKinematic__Class>(type_info(), "", "ToggleAllKinematic");
        }
        inline app::ToggleAllKinematic* create() {
            return il2cpp::create_object<app::ToggleAllKinematic>(get_class());
        }
    } // namespace ToggleAllKinematic
} // namespace app::classes::types
