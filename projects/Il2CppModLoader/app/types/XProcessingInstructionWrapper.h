#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XProcessingInstructionWrapper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XProcessingInstructionWrapper__Class** type_info;
        inline app::XProcessingInstructionWrapper__Class* get_class() {
            return il2cpp::get_class<app::XProcessingInstructionWrapper__Class>(type_info, "Newtonsoft.Json.Converters", "XProcessingInstructionWrapper");
        }
        inline app::XProcessingInstructionWrapper* create() {
            return il2cpp::create_object<app::XProcessingInstructionWrapper>(get_class());
        }
    } // namespace XProcessingInstructionWrapper
} // namespace app::classes::types
