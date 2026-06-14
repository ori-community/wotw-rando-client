#pragma once
#include <Modloader/app/structs/PipeTransmissionMode__Enum.h>
#include <Modloader/app/structs/PipeTransmissionMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PipeTransmissionMode__Enum {
        inline app::PipeTransmissionMode__Enum__Class** type_info() {
            static app::PipeTransmissionMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PipeTransmissionMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PipeTransmissionMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::PipeTransmissionMode__Enum__Class>(type_info(), "System.IO.Pipes", "PipeTransmissionMode");
        }
        inline app::PipeTransmissionMode__Enum* create() {
            return il2cpp::create_object<app::PipeTransmissionMode__Enum>(get_class());
        }
    } // namespace PipeTransmissionMode__Enum
} // namespace app::classes::types
