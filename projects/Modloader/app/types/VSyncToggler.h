#pragma once
#include <Modloader/app/structs/VSyncToggler.h>
#include <Modloader/app/structs/VSyncToggler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VSyncToggler {
        inline app::VSyncToggler__Class** type_info() {
            static app::VSyncToggler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VSyncToggler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VSyncToggler__Class* get_class() {
            return il2cpp::get_class<app::VSyncToggler__Class>(type_info(), "", "VSyncToggler");
        }
        inline app::VSyncToggler* create() {
            return il2cpp::create_object<app::VSyncToggler>(get_class());
        }
    } // namespace VSyncToggler
} // namespace app::classes::types
