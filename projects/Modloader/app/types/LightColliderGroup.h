#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LightColliderGroup {
        namespace {
            inline app::LightColliderGroup__Class* type_info_ref = nullptr;
        }
        inline app::LightColliderGroup__Class** type_info = &type_info_ref;
        inline app::LightColliderGroup__Class* get_class() {
            return il2cpp::get_class<app::LightColliderGroup__Class>(type_info, "", "LightColliderGroup");
        }
        inline app::LightColliderGroup* create() {
            return il2cpp::create_object<app::LightColliderGroup>(get_class());
        }
    } // namespace LightColliderGroup
} // namespace app::classes::types
