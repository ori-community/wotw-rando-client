#pragma once
#include <Modloader/app/structs/ApplicationQuit_1.h>
#include <Modloader/app/structs/ApplicationQuit_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ApplicationQuit_1 {
        inline app::ApplicationQuit_1__Class** type_info() {
            static app::ApplicationQuit_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ApplicationQuit_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ApplicationQuit_1__Class* get_class() {
            return il2cpp::get_class<app::ApplicationQuit_1__Class>(type_info(), "", "ApplicationQuit");
        }
        inline app::ApplicationQuit_1* create() {
            return il2cpp::create_object<app::ApplicationQuit_1>(get_class());
        }
    } // namespace ApplicationQuit_1
} // namespace app::classes::types
