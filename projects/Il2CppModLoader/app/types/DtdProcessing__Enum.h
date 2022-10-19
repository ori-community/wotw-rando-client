#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DtdProcessing__Enum {
        namespace {
            inline app::DtdProcessing__Enum__Class* type_info_ref = nullptr;
        }
        inline app::DtdProcessing__Enum__Class** type_info = &type_info_ref;
        inline app::DtdProcessing__Enum__Class* get_class() {
            return il2cpp::get_class<app::DtdProcessing__Enum__Class>(type_info, "System.Xml", "DtdProcessing");
        }
        inline app::DtdProcessing__Enum* create() {
            return il2cpp::create_object<app::DtdProcessing__Enum>(get_class());
        }
    } // namespace DtdProcessing__Enum
} // namespace app::classes::types
