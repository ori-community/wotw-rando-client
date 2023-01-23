#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IScenePosition__Class.h>

namespace app::classes::types {
    namespace IScenePosition {
        namespace {
            inline app::IScenePosition__Class* type_info_ref = nullptr;
        }
        inline app::IScenePosition__Class** type_info = &type_info_ref;
        inline app::IScenePosition__Class* get_class() {
            return il2cpp::get_class<app::IScenePosition__Class>(type_info, "Moon.SceneManagement", "IScenePosition");
        }
    } // namespace IScenePosition
} // namespace app::classes::types
