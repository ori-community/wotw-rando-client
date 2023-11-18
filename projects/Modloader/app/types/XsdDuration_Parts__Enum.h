#pragma once
#include <Modloader/app/structs/XsdDuration_Parts__Enum.h>
#include <Modloader/app/structs/XsdDuration_Parts__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XsdDuration_Parts__Enum {
        inline app::XsdDuration_Parts__Enum__Class** type_info() {
            static app::XsdDuration_Parts__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XsdDuration_Parts__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XsdDuration_Parts__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::XsdDuration_Parts__Enum__Class>(type_info(), "System.Xml.Schema", "XsdDuration", "Parts");
        }
        inline app::XsdDuration_Parts__Enum* create() {
            return il2cpp::create_object<app::XsdDuration_Parts__Enum>(get_class());
        }
    } // namespace XsdDuration_Parts__Enum
} // namespace app::classes::types
