#pragma once
#include <Modloader/app/structs/UberGCLogic_CleanupType__Enum.h>
#include <Modloader/app/structs/UberGCLogic_CleanupType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberGCLogic_CleanupType__Enum {
        inline app::UberGCLogic_CleanupType__Enum__Class** type_info() {
            static app::UberGCLogic_CleanupType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberGCLogic_CleanupType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberGCLogic_CleanupType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UberGCLogic_CleanupType__Enum__Class>(type_info(), "UberShader.optimizations.gc", "UberGCLogic", "CleanupType");
        }
        inline app::UberGCLogic_CleanupType__Enum* create() {
            return il2cpp::create_object<app::UberGCLogic_CleanupType__Enum>(get_class());
        }
    } // namespace UberGCLogic_CleanupType__Enum
} // namespace app::classes::types
