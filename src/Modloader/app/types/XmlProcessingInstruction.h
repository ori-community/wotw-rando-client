#pragma once
#include <Modloader/app/structs/XmlProcessingInstruction.h>
#include <Modloader/app/structs/XmlProcessingInstruction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlProcessingInstruction {
        inline app::XmlProcessingInstruction__Class** type_info() {
            static app::XmlProcessingInstruction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlProcessingInstruction__Class**)(modloader::win::memory::resolve_rva(0x0470FE58));
            }
            return cache;
        }
        inline app::XmlProcessingInstruction__Class* get_class() {
            return il2cpp::get_class<app::XmlProcessingInstruction__Class>(type_info(), "System.Xml", "XmlProcessingInstruction");
        }
        inline app::XmlProcessingInstruction* create() {
            return il2cpp::create_object<app::XmlProcessingInstruction>(get_class());
        }
    } // namespace XmlProcessingInstruction
} // namespace app::classes::types
