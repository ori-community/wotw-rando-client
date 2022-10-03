#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PipeTransmissionMode__Enum {
        namespace {
            app::PipeTransmissionMode__Enum__Class* type_info_ref = nullptr;
        }
        app::PipeTransmissionMode__Enum__Class** type_info = &type_info_ref;
        inline app::PipeTransmissionMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::PipeTransmissionMode__Enum__Class>(type_info, "System.IO.Pipes", "PipeTransmissionMode");
        }
        inline app::PipeTransmissionMode__Enum* create() {
            return il2cpp::create_object<app::PipeTransmissionMode__Enum>(get_class());
        }
    } // namespace PipeTransmissionMode__Enum
} // namespace app::classes::types
