#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RootMotionProcessorData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RootMotionProcessorData__Class** type_info;
        inline app::RootMotionProcessorData__Class* get_class() {
            return il2cpp::get_class<app::RootMotionProcessorData__Class>(type_info, "", "RootMotionProcessorData");
        }
        inline app::RootMotionProcessorData* create() {
            return il2cpp::create_object<app::RootMotionProcessorData>(get_class());
        }
    } // namespace RootMotionProcessorData
} // namespace app::classes::types
