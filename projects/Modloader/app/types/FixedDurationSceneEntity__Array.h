#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FixedDurationSceneEntity__Array {
        namespace {
            inline app::FixedDurationSceneEntity__Array__Class* type_info_ref = nullptr;
        }
        inline app::FixedDurationSceneEntity__Array__Class** type_info = &type_info_ref;
        inline app::FixedDurationSceneEntity__Array__Class* get_class() {
            return il2cpp::get_class<app::FixedDurationSceneEntity__Array__Class>(type_info, "Moon.Timeline", "FixedDurationSceneEntity[]");
        }
        inline app::FixedDurationSceneEntity__Array* create() {
            return il2cpp::create_object<app::FixedDurationSceneEntity__Array>(get_class());
        }
    } // namespace FixedDurationSceneEntity__Array
} // namespace app::classes::types
