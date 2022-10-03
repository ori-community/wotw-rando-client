#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberGCLogic_GCLogicSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberGCLogic_GCLogicSettings__Class** type_info;
        inline app::UberGCLogic_GCLogicSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::UberGCLogic_GCLogicSettings__Class>(type_info, "UberShader.optimizations.gc", "UberGCLogic", "GCLogicSettings");
        }
        inline app::UberGCLogic_GCLogicSettings* create() {
            return il2cpp::create_object<app::UberGCLogic_GCLogicSettings>(get_class());
        }
    } // namespace UberGCLogic_GCLogicSettings
} // namespace app::classes::types
