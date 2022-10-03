#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XsdDuration_Parts__Enum {
        namespace {
            app::XsdDuration_Parts__Enum__Class* type_info_ref = nullptr;
        }
        app::XsdDuration_Parts__Enum__Class** type_info = &type_info_ref;
        inline app::XsdDuration_Parts__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::XsdDuration_Parts__Enum__Class>(type_info, "System.Xml.Schema", "XsdDuration", "Parts");
        }
        inline app::XsdDuration_Parts__Enum* create() {
            return il2cpp::create_object<app::XsdDuration_Parts__Enum>(get_class());
        }
    } // namespace XsdDuration_Parts__Enum
} // namespace app::classes::types
