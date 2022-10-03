#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SkipCutscene {
        namespace {
            app::SkipCutscene__Class* type_info_ref = nullptr;
        }
        app::SkipCutscene__Class** type_info = &type_info_ref;
        inline app::SkipCutscene__Class* get_class() {
            return il2cpp::get_class<app::SkipCutscene__Class>(type_info, "", "SkipCutscene");
        }
        inline app::SkipCutscene* create() {
            return il2cpp::create_object<app::SkipCutscene>(get_class());
        }
    } // namespace SkipCutscene
} // namespace app::classes::types
