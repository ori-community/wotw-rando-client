#pragma once
#include <Modloader/app/structs/MudkisserChaseBehaviour.h>
#include <Modloader/app/structs/MudkisserChaseBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MudkisserChaseBehaviour {
        inline app::MudkisserChaseBehaviour__Class** type_info() {
            static app::MudkisserChaseBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MudkisserChaseBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MudkisserChaseBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MudkisserChaseBehaviour__Class>(type_info(), "", "MudkisserChaseBehaviour");
        }
        inline app::MudkisserChaseBehaviour* create() {
            return il2cpp::create_object<app::MudkisserChaseBehaviour>(get_class());
        }
    } // namespace MudkisserChaseBehaviour
} // namespace app::classes::types
