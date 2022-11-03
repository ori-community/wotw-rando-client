#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberWaterReflectionGroup {
        namespace {
            inline app::UberWaterReflectionGroup__Class* type_info_ref = nullptr;
        }
        inline app::UberWaterReflectionGroup__Class** type_info = &type_info_ref;
        inline app::UberWaterReflectionGroup__Class* get_class() {
            return il2cpp::get_class<app::UberWaterReflectionGroup__Class>(type_info, "", "UberWaterReflectionGroup");
        }
        inline app::UberWaterReflectionGroup* create() {
            return il2cpp::create_object<app::UberWaterReflectionGroup>(get_class());
        }
    } // namespace UberWaterReflectionGroup
} // namespace app::classes::types
