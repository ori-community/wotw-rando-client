#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberGCLogic_CleanupType__Enum {
        namespace {
            inline app::UberGCLogic_CleanupType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::UberGCLogic_CleanupType__Enum__Class** type_info = &type_info_ref;
        inline app::UberGCLogic_CleanupType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UberGCLogic_CleanupType__Enum__Class>(type_info, "UberShader.optimizations.gc", "UberGCLogic", "CleanupType");
        }
        inline app::UberGCLogic_CleanupType__Enum* create() {
            return il2cpp::create_object<app::UberGCLogic_CleanupType__Enum>(get_class());
        }
    } // namespace UberGCLogic_CleanupType__Enum
} // namespace app::classes::types
