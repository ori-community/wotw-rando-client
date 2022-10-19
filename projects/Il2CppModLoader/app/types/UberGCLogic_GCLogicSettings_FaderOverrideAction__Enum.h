#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberGCLogic_GCLogicSettings_FaderOverrideAction__Enum {
        namespace {
            inline app::UberGCLogic_GCLogicSettings_FaderOverrideAction__Enum__Class* type_info_ref = nullptr;
        }
        inline app::UberGCLogic_GCLogicSettings_FaderOverrideAction__Enum__Class** type_info = &type_info_ref;
        inline app::UberGCLogic_GCLogicSettings_FaderOverrideAction__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UberGCLogic_GCLogicSettings_FaderOverrideAction__Enum__Class>(type_info, "UberShader.optimizations.gc", "UberGCLogic+GCLogicSettings", "FaderOverrideAction");
        }
        inline app::UberGCLogic_GCLogicSettings_FaderOverrideAction__Enum* create() {
            return il2cpp::create_object<app::UberGCLogic_GCLogicSettings_FaderOverrideAction__Enum>(get_class());
        }
        inline app::UberGCLogic_GCLogicSettings_FaderOverrideAction__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::UberGCLogic_GCLogicSettings_FaderOverrideAction__Enum__Array>(get_class(), size);
        }
        inline app::UberGCLogic_GCLogicSettings_FaderOverrideAction__Enum__Array* create_array(const std::vector<app::UberGCLogic_GCLogicSettings_FaderOverrideAction__Enum*>& items) {
            return il2cpp::array_new<app::UberGCLogic_GCLogicSettings_FaderOverrideAction__Enum__Array>(get_class(), items);
        }
    } // namespace UberGCLogic_GCLogicSettings_FaderOverrideAction__Enum
} // namespace app::classes::types
