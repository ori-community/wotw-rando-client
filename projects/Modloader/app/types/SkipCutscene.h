#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SkipCutscene {
        namespace {
            inline app::SkipCutscene__Class* type_info_ref = nullptr;
        }
        inline app::SkipCutscene__Class** type_info = &type_info_ref;
        inline app::SkipCutscene__Class* get_class() {
            return il2cpp::get_class<app::SkipCutscene__Class>(type_info, "", "SkipCutscene");
        }
        inline app::SkipCutscene* create() {
            return il2cpp::create_object<app::SkipCutscene>(get_class());
        }
    } // namespace SkipCutscene
} // namespace app::classes::types
