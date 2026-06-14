#pragma once
#include <Modloader/app/structs/UserControlAI.h>
#include <Modloader/app/structs/UserControlAI__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UserControlAI {
        inline app::UserControlAI__Class** type_info() {
            static app::UserControlAI__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UserControlAI__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UserControlAI__Class* get_class() {
            return il2cpp::get_class<app::UserControlAI__Class>(type_info(), "RootMotion.Demos", "UserControlAI");
        }
        inline app::UserControlAI* create() {
            return il2cpp::create_object<app::UserControlAI>(get_class());
        }
    } // namespace UserControlAI
} // namespace app::classes::types
