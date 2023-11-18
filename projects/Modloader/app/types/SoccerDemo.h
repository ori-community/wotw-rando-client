#pragma once
#include <Modloader/app/structs/SoccerDemo.h>
#include <Modloader/app/structs/SoccerDemo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SoccerDemo {
        inline app::SoccerDemo__Class** type_info() {
            static app::SoccerDemo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SoccerDemo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SoccerDemo__Class* get_class() {
            return il2cpp::get_class<app::SoccerDemo__Class>(type_info(), "RootMotion.Demos", "SoccerDemo");
        }
        inline app::SoccerDemo* create() {
            return il2cpp::create_object<app::SoccerDemo>(get_class());
        }
    } // namespace SoccerDemo
} // namespace app::classes::types
