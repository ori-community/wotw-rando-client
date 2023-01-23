#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/KeepSceneLoadedEntity__Class.h>
#include <Modloader/app/structs/KeepSceneLoadedEntity.h>

namespace app::classes::types {
    namespace KeepSceneLoadedEntity {
        namespace {
            inline app::KeepSceneLoadedEntity__Class* type_info_ref = nullptr;
        }
        inline app::KeepSceneLoadedEntity__Class** type_info = &type_info_ref;
        inline app::KeepSceneLoadedEntity__Class* get_class() {
            return il2cpp::get_class<app::KeepSceneLoadedEntity__Class>(type_info, "Moon.Timeline", "KeepSceneLoadedEntity");
        }
        inline app::KeepSceneLoadedEntity* create() {
            return il2cpp::create_object<app::KeepSceneLoadedEntity>(get_class());
        }
    } // namespace KeepSceneLoadedEntity
} // namespace app::classes::types
