#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum__Class.h>
#include <Modloader/app/structs/UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum.h>
#include <Modloader/app/structs/UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum__Array.h>

namespace app::classes::types {
    namespace UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum {
        inline app::UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum__Class** type_info = (app::UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum__Class**)(modloader::win::memory::resolve_rva(0x0477DA68));
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
