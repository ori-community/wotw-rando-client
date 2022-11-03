#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ScaleAnimatorEntity {
        namespace {
            inline app::ScaleAnimatorEntity__Class* type_info_ref = nullptr;
        }
        inline app::ScaleAnimatorEntity__Class** type_info = &type_info_ref;
        inline app::ScaleAnimatorEntity__Class* get_class() {
            return il2cpp::get_class<app::ScaleAnimatorEntity__Class>(type_info, "Moon.Timeline", "ScaleAnimatorEntity");
        }
        inline app::ScaleAnimatorEntity* create() {
            return il2cpp::create_object<app::ScaleAnimatorEntity>(get_class());
        }
    } // namespace ScaleAnimatorEntity
} // namespace app::classes::types
