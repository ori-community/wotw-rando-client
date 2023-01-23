#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SceneLoadingZone__Class.h>
#include <Modloader/app/structs/SceneLoadingZone.h>

namespace app::classes::types {
    namespace SceneLoadingZone {
        namespace {
            inline app::SceneLoadingZone__Class* type_info_ref = nullptr;
        }
        inline app::SceneLoadingZone__Class** type_info = &type_info_ref;
        inline app::SceneLoadingZone__Class* get_class() {
            return il2cpp::get_class<app::SceneLoadingZone__Class>(type_info, "", "SceneLoadingZone");
        }
        inline app::SceneLoadingZone* create() {
            return il2cpp::create_object<app::SceneLoadingZone>(get_class());
        }
    } // namespace SceneLoadingZone
} // namespace app::classes::types
