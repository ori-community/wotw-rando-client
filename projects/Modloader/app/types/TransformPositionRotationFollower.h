#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TransformPositionRotationFollower {
        namespace {
            inline app::TransformPositionRotationFollower__Class* type_info_ref = nullptr;
        }
        inline app::TransformPositionRotationFollower__Class** type_info = &type_info_ref;
        inline app::TransformPositionRotationFollower__Class* get_class() {
            return il2cpp::get_class<app::TransformPositionRotationFollower__Class>(type_info, "", "TransformPositionRotationFollower");
        }
        inline app::TransformPositionRotationFollower* create() {
            return il2cpp::create_object<app::TransformPositionRotationFollower>(get_class());
        }
    } // namespace TransformPositionRotationFollower
} // namespace app::classes::types
