#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XProcessingInstructionWrapper {
        inline app::XProcessingInstructionWrapper__Class** type_info = (app::XProcessingInstructionWrapper__Class**)(modloader::win::memory::resolve_rva(0x0475F660));
        inline app::XProcessingInstructionWrapper__Class* get_class() {
            return il2cpp::get_class<app::XProcessingInstructionWrapper__Class>(type_info, "Newtonsoft.Json.Converters", "XProcessingInstructionWrapper");
        }
        inline app::XProcessingInstructionWrapper* create() {
            return il2cpp::create_object<app::XProcessingInstructionWrapper>(get_class());
        }
    } // namespace XProcessingInstructionWrapper
} // namespace app::classes::types
