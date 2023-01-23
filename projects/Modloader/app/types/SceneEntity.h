#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SceneEntity__Class.h>
#include <Modloader/app/structs/SceneEntity.h>

namespace app::classes::types {
    namespace SceneEntity {
        namespace {
            inline app::SceneEntity__Class* type_info_ref = nullptr;
        }
        inline app::SceneEntity__Class** type_info = &type_info_ref;
        inline app::SceneEntity__Class* get_class() {
            return il2cpp::get_class<app::SceneEntity__Class>(type_info, "Moon.Timeline", "SceneEntity");
        }
        inline app::SceneEntity* create() {
            return il2cpp::create_object<app::SceneEntity>(get_class());
        }
    } // namespace SceneEntity
} // namespace app::classes::types
