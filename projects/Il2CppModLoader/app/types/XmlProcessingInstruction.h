#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlProcessingInstruction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlProcessingInstruction__Class** type_info;
        inline app::XmlProcessingInstruction__Class* get_class() {
            return il2cpp::get_class<app::XmlProcessingInstruction__Class>(type_info, "System.Xml", "XmlProcessingInstruction");
        }
        inline app::XmlProcessingInstruction* create() {
            return il2cpp::create_object<app::XmlProcessingInstruction>(get_class());
        }
    } // namespace XmlProcessingInstruction
} // namespace app::classes::types
