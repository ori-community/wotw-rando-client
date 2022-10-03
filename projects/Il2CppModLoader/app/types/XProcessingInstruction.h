#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XProcessingInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XProcessingInstruction__Class** type_info;
        inline app::XProcessingInstruction__Class* get_class() {
            return il2cpp::get_class<app::XProcessingInstruction__Class>(type_info, "System.Xml.Linq", "XProcessingInstruction");
        }
        inline app::XProcessingInstruction* create() {
            return il2cpp::create_object<app::XProcessingInstruction>(get_class());
        }
    } // namespace XProcessingInstruction
} // namespace app::classes::types
