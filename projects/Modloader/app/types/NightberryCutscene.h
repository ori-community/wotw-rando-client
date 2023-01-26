#pragma once
#include <Modloader/app/structs/NightberryCutscene.h>
#include <Modloader/app/structs/NightberryCutscene__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NightberryCutscene {
        inline app::NightberryCutscene__Class** type_info() {
            static app::NightberryCutscene__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NightberryCutscene__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NightberryCutscene__Class* get_class() {
            return il2cpp::get_class<app::NightberryCutscene__Class>(type_info(), "", "NightberryCutscene");
        }
        inline app::NightberryCutscene* create() {
            return il2cpp::create_object<app::NightberryCutscene>(get_class());
        }
    } // namespace NightberryCutscene
} // namespace app::classes::types
