#pragma once
#include <Modloader/app/structs/DesiredUberStateInt__Array.h>
#include <Modloader/app/structs/DesiredUberStateInt__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DesiredUberStateInt__Array {
        inline app::DesiredUberStateInt__Array__Class** type_info() {
            static app::DesiredUberStateInt__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DesiredUberStateInt__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DesiredUberStateInt__Array__Class* get_class() {
            return il2cpp::get_class<app::DesiredUberStateInt__Array__Class>(type_info(), "", "DesiredUberStateInt[]");
        }
        inline app::DesiredUberStateInt__Array* create() {
            return il2cpp::create_object<app::DesiredUberStateInt__Array>(get_class());
        }
    } // namespace DesiredUberStateInt__Array
} // namespace app::classes::types
