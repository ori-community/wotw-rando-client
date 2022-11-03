#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XProcessingInstruction {
        inline app::XProcessingInstruction__Class** type_info = (app::XProcessingInstruction__Class**)(modloader::win::memory::resolve_rva(0x04783E88));
        inline app::XProcessingInstruction__Class* get_class() {
            return il2cpp::get_class<app::XProcessingInstruction__Class>(type_info, "System.Xml.Linq", "XProcessingInstruction");
        }
        inline app::XProcessingInstruction* create() {
            return il2cpp::create_object<app::XProcessingInstruction>(get_class());
        }
    } // namespace XProcessingInstruction
} // namespace app::classes::types
