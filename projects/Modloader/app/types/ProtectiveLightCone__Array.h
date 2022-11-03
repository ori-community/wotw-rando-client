#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ProtectiveLightCone__Array {
        namespace {
            inline app::ProtectiveLightCone__Array__Class* type_info_ref = nullptr;
        }
        inline app::ProtectiveLightCone__Array__Class** type_info = &type_info_ref;
        inline app::ProtectiveLightCone__Array__Class* get_class() {
            return il2cpp::get_class<app::ProtectiveLightCone__Array__Class>(type_info, "", "ProtectiveLightCone[]");
        }
        inline app::ProtectiveLightCone__Array* create() {
            return il2cpp::create_object<app::ProtectiveLightCone__Array>(get_class());
        }
    } // namespace ProtectiveLightCone__Array
} // namespace app::classes::types
