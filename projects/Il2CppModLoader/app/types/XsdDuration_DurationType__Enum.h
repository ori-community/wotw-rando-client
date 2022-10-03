#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XsdDuration_DurationType__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XsdDuration_DurationType__Enum__Class** type_info;
        inline app::XsdDuration_DurationType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::XsdDuration_DurationType__Enum__Class>(type_info, "System.Xml.Schema", "XsdDuration", "DurationType");
        }
        inline app::XsdDuration_DurationType__Enum* create() {
            return il2cpp::create_object<app::XsdDuration_DurationType__Enum>(get_class());
        }
    } // namespace XsdDuration_DurationType__Enum
} // namespace app::classes::types
