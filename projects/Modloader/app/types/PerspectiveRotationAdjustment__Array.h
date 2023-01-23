#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PerspectiveRotationAdjustment__Array__Class.h>
#include <Modloader/app/structs/PerspectiveRotationAdjustment__Array.h>

namespace app::classes::types {
    namespace PerspectiveRotationAdjustment__Array {
        namespace {
            inline app::PerspectiveRotationAdjustment__Array__Class* type_info_ref = nullptr;
        }
        inline app::PerspectiveRotationAdjustment__Array__Class** type_info = &type_info_ref;
        inline app::PerspectiveRotationAdjustment__Array__Class* get_class() {
            return il2cpp::get_class<app::PerspectiveRotationAdjustment__Array__Class>(type_info, "", "PerspectiveRotationAdjustment[]");
        }
        inline app::PerspectiveRotationAdjustment__Array* create() {
            return il2cpp::create_object<app::PerspectiveRotationAdjustment__Array>(get_class());
        }
    } // namespace PerspectiveRotationAdjustment__Array
} // namespace app::classes::types
