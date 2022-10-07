#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum__Class** type_info;
        inline app::UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum__Class>(type_info, "UberShader.optimizations.gc", "UberGCLogic", "CleanupOutsideOfGameplayTrigger");
        }
        inline app::UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum* create() {
            return il2cpp::create_object<app::UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum>(get_class());
        }
        inline app::UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum__Array>(get_class(), size);
        }
        inline app::UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum__Array* create_array(const std::vector<app::UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum*>& items) {
            return il2cpp::array_new<app::UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum__Array>(get_class(), items);
        }
    } // namespace UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum
} // namespace app::classes::types
