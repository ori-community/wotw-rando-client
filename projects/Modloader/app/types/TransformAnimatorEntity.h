#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TransformAnimatorEntity__Class.h>
#include <Modloader/app/structs/TransformAnimatorEntity.h>

namespace app::classes::types {
    namespace TransformAnimatorEntity {
        namespace {
            inline app::TransformAnimatorEntity__Class* type_info_ref = nullptr;
        }
        inline app::TransformAnimatorEntity__Class** type_info = &type_info_ref;
        inline app::TransformAnimatorEntity__Class* get_class() {
            return il2cpp::get_class<app::TransformAnimatorEntity__Class>(type_info, "Moon.Timeline", "TransformAnimatorEntity");
        }
        inline app::TransformAnimatorEntity* create() {
            return il2cpp::create_object<app::TransformAnimatorEntity>(get_class());
        }
    } // namespace TransformAnimatorEntity
} // namespace app::classes::types
