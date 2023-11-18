#pragma once
#include <Modloader/app/structs/Brain.h>
#include <Modloader/app/structs/Brain__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Brain {
        inline app::Brain__Class** type_info() {
            static app::Brain__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Brain__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Brain__Class* get_class() {
            return il2cpp::get_class<app::Brain__Class>(type_info(), "Moon", "Brain");
        }
        inline app::Brain* create() {
            return il2cpp::create_object<app::Brain>(get_class());
        }
    } // namespace Brain
} // namespace app::classes::types
