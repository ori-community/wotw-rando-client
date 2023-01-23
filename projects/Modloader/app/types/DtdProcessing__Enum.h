#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DtdProcessing__Enum__Class.h>
#include <Modloader/app/structs/DtdProcessing__Enum.h>

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
