#pragma once
#include <Modloader/app/structs/InteractionDemo.h>
#include <Modloader/app/structs/InteractionDemo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InteractionDemo {
        inline app::InteractionDemo__Class** type_info() {
            static app::InteractionDemo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InteractionDemo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InteractionDemo__Class* get_class() {
            return il2cpp::get_class<app::InteractionDemo__Class>(type_info(), "RootMotion.Demos", "InteractionDemo");
        }
        inline app::InteractionDemo* create() {
            return il2cpp::create_object<app::InteractionDemo>(get_class());
        }
    } // namespace InteractionDemo
} // namespace app::classes::types
