#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XsdDuration_DurationType__Enum {
        inline app::XsdDuration_DurationType__Enum__Class** type_info = (app::XsdDuration_DurationType__Enum__Class**)(modloader::win::memory::resolve_rva(0x0474FA60));
        inline app::XsdDuration_DurationType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::XsdDuration_DurationType__Enum__Class>(type_info, "System.Xml.Schema", "XsdDuration", "DurationType");
        }
        inline app::XsdDuration_DurationType__Enum* create() {
            return il2cpp::create_object<app::XsdDuration_DurationType__Enum>(get_class());
        }
    } // namespace XsdDuration_DurationType__Enum
} // namespace app::classes::types
