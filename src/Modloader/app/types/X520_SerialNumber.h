#pragma once
#include <Modloader/app/structs/X520_SerialNumber.h>
#include <Modloader/app/structs/X520_SerialNumber__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace X520_SerialNumber {
        inline app::X520_SerialNumber__Class** type_info() {
            static app::X520_SerialNumber__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::X520_SerialNumber__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::X520_SerialNumber__Class* get_class() {
            return il2cpp::get_nested_class<app::X520_SerialNumber__Class>(type_info(), "Mono.Security.X509", "X520", "SerialNumber");
        }
        inline app::X520_SerialNumber* create() {
            return il2cpp::create_object<app::X520_SerialNumber>(get_class());
        }
    } // namespace X520_SerialNumber
} // namespace app::classes::types
