#pragma once
#include <Modloader/app/structs/InteractionToggler.h>
#include <Modloader/app/structs/InteractionToggler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InteractionToggler {
        inline app::InteractionToggler__Class** type_info() {
            static app::InteractionToggler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InteractionToggler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InteractionToggler__Class* get_class() {
            return il2cpp::get_class<app::InteractionToggler__Class>(type_info(), "", "InteractionToggler");
        }
        inline app::InteractionToggler* create() {
            return il2cpp::create_object<app::InteractionToggler>(get_class());
        }
    } // namespace InteractionToggler
} // namespace app::classes::types
