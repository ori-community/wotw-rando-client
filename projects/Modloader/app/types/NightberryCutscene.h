#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NightberryCutscene__Class.h>
#include <Modloader/app/structs/NightberryCutscene.h>

namespace app::classes::types {
    namespace NightberryCutscene {
        namespace {
            inline app::NightberryCutscene__Class* type_info_ref = nullptr;
        }
        inline app::NightberryCutscene__Class** type_info = &type_info_ref;
        inline app::NightberryCutscene__Class* get_class() {
            return il2cpp::get_class<app::NightberryCutscene__Class>(type_info, "", "NightberryCutscene");
        }
        inline app::NightberryCutscene* create() {
            return il2cpp::create_object<app::NightberryCutscene>(get_class());
        }
    } // namespace NightberryCutscene
} // namespace app::classes::types
