#pragma once
#include <Modloader/app/structs/XProcessingInstructionWrapper.h>
#include <Modloader/app/structs/XProcessingInstructionWrapper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XProcessingInstructionWrapper {
        inline app::XProcessingInstructionWrapper__Class** type_info() {
            static app::XProcessingInstructionWrapper__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XProcessingInstructionWrapper__Class**)(modloader::win::memory::resolve_rva(0x0475F660));
            }
            return cache;
        }
        inline app::XProcessingInstructionWrapper__Class* get_class() {
            return il2cpp::get_class<app::XProcessingInstructionWrapper__Class>(type_info(), "Newtonsoft.Json.Converters", "XProcessingInstructionWrapper");
        }
        inline app::XProcessingInstructionWrapper* create() {
            return il2cpp::create_object<app::XProcessingInstructionWrapper>(get_class());
        }
    } // namespace XProcessingInstructionWrapper
} // namespace app::classes::types
