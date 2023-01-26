#pragma once
#include <Modloader/app/structs/OnSeinNearExit.h>
#include <Modloader/app/structs/OnSeinNearExit__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OnSeinNearExit {
        inline app::OnSeinNearExit__Class** type_info() {
            static app::OnSeinNearExit__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OnSeinNearExit__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OnSeinNearExit__Class* get_class() {
            return il2cpp::get_class<app::OnSeinNearExit__Class>(type_info(), "fsm.triggers", "OnSeinNearExit");
        }
        inline app::OnSeinNearExit* create() {
            return il2cpp::create_object<app::OnSeinNearExit>(get_class());
        }
    } // namespace OnSeinNearExit
} // namespace app::classes::types
