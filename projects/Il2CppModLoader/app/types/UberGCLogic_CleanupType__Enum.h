#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberGCLogic_CleanupType__Enum {
        namespace {
            app::UberGCLogic_CleanupType__Enum__Class* type_info_ref = nullptr;
        }
        app::UberGCLogic_CleanupType__Enum__Class** type_info = &type_info_ref;
        inline app::UberGCLogic_CleanupType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UberGCLogic_CleanupType__Enum__Class>(type_info, "UberShader.optimizations.gc", "UberGCLogic", "CleanupType");
        }
        inline app::UberGCLogic_CleanupType__Enum* create() {
            return il2cpp::create_object<app::UberGCLogic_CleanupType__Enum>(get_class());
        }
    } // namespace UberGCLogic_CleanupType__Enum
} // namespace app::classes::types
