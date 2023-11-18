#pragma once
#include <Modloader/app/structs/DtdParser_ScanningFunction__Enum.h>
#include <Modloader/app/structs/DtdParser_ScanningFunction__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DtdParser_ScanningFunction__Enum {
        inline app::DtdParser_ScanningFunction__Enum__Class** type_info() {
            static app::DtdParser_ScanningFunction__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DtdParser_ScanningFunction__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DtdParser_ScanningFunction__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DtdParser_ScanningFunction__Enum__Class>(type_info(), "System.Xml", "DtdParser", "ScanningFunction");
        }
        inline app::DtdParser_ScanningFunction__Enum* create() {
            return il2cpp::create_object<app::DtdParser_ScanningFunction__Enum>(get_class());
        }
    } // namespace DtdParser_ScanningFunction__Enum
} // namespace app::classes::types
