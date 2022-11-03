#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinCutsceneBlocked {
        namespace {
            inline app::SeinCutsceneBlocked__Class* type_info_ref = nullptr;
        }
        inline app::SeinCutsceneBlocked__Class** type_info = &type_info_ref;
        inline app::SeinCutsceneBlocked__Class* get_class() {
            return il2cpp::get_class<app::SeinCutsceneBlocked__Class>(type_info, "", "SeinCutsceneBlocked");
        }
        inline app::SeinCutsceneBlocked* create() {
            return il2cpp::create_object<app::SeinCutsceneBlocked>(get_class());
        }
    } // namespace SeinCutsceneBlocked
} // namespace app::classes::types
