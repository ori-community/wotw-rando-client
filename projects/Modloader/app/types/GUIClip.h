#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GUIClip__Class.h>
#include <Modloader/app/structs/GUIClip.h>

namespace app::classes::types {
    namespace GUIClip {
        namespace {
            inline app::GUIClip__Class* type_info_ref = nullptr;
        }
        inline app::GUIClip__Class** type_info = &type_info_ref;
        inline app::GUIClip__Class* get_class() {
            return il2cpp::get_class<app::GUIClip__Class>(type_info, "UnityEngine", "GUIClip");
        }
        inline app::GUIClip* create() {
            return il2cpp::create_object<app::GUIClip>(get_class());
        }
    } // namespace GUIClip
} // namespace app::classes::types
