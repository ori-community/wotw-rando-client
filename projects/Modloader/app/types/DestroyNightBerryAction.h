#pragma once
#include <Modloader/app/structs/DestroyNightBerryAction.h>
#include <Modloader/app/structs/DestroyNightBerryAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DestroyNightBerryAction {
        inline app::DestroyNightBerryAction__Class** type_info() {
            static app::DestroyNightBerryAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DestroyNightBerryAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DestroyNightBerryAction__Class* get_class() {
            return il2cpp::get_class<app::DestroyNightBerryAction__Class>(type_info(), "", "DestroyNightBerryAction");
        }
        inline app::DestroyNightBerryAction* create() {
            return il2cpp::create_object<app::DestroyNightBerryAction>(get_class());
        }
    } // namespace DestroyNightBerryAction
} // namespace app::classes::types
