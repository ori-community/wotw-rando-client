#pragma once
#include <Modloader/app/structs/GrounderDemo.h>
#include <Modloader/app/structs/GrounderDemo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GrounderDemo {
        inline app::GrounderDemo__Class** type_info() {
            static app::GrounderDemo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GrounderDemo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GrounderDemo__Class* get_class() {
            return il2cpp::get_class<app::GrounderDemo__Class>(type_info(), "RootMotion.Demos", "GrounderDemo");
        }
        inline app::GrounderDemo* create() {
            return il2cpp::create_object<app::GrounderDemo>(get_class());
        }
    } // namespace GrounderDemo
} // namespace app::classes::types
