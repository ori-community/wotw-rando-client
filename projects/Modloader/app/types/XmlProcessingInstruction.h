#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlProcessingInstruction__Class.h>
#include <Modloader/app/structs/XmlProcessingInstruction.h>

namespace app::classes::types {
    namespace XmlProcessingInstruction {
        inline app::XmlProcessingInstruction__Class** type_info = (app::XmlProcessingInstruction__Class**)(modloader::win::memory::resolve_rva(0x0470FE58));
        inline app::XmlProcessingInstruction__Class* get_class() {
            return il2cpp::get_class<app::XmlProcessingInstruction__Class>(type_info, "System.Xml", "XmlProcessingInstruction");
        }
        inline app::XmlProcessingInstruction* create() {
            return il2cpp::create_object<app::XmlProcessingInstruction>(get_class());
        }
    } // namespace XmlProcessingInstruction
} // namespace app::classes::types
