#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TransformFollower__Class.h>
#include <Modloader/app/structs/TransformFollower.h>

namespace app::classes::types {
    namespace TransformFollower {
        namespace {
            inline app::TransformFollower__Class* type_info_ref = nullptr;
        }
        inline app::TransformFollower__Class** type_info = &type_info_ref;
        inline app::TransformFollower__Class* get_class() {
            return il2cpp::get_class<app::TransformFollower__Class>(type_info, "", "TransformFollower");
        }
        inline app::TransformFollower* create() {
            return il2cpp::create_object<app::TransformFollower>(get_class());
        }
    } // namespace TransformFollower
} // namespace app::classes::types
