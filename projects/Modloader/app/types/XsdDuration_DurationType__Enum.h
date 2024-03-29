#pragma once
#include <Modloader/app/structs/XsdDuration_DurationType__Enum.h>
#include <Modloader/app/structs/XsdDuration_DurationType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XsdDuration_DurationType__Enum {
        inline app::XsdDuration_DurationType__Enum__Class** type_info() {
            static app::XsdDuration_DurationType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XsdDuration_DurationType__Enum__Class**)(modloader::win::memory::resolve_rva(0x0474FA60));
            }
            return cache;
        }
        inline app::XsdDuration_DurationType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::XsdDuration_DurationType__Enum__Class>(type_info(), "System.Xml.Schema", "XsdDuration", "DurationType");
        }
        inline app::XsdDuration_DurationType__Enum* create() {
            return il2cpp::create_object<app::XsdDuration_DurationType__Enum>(get_class());
        }
    } // namespace XsdDuration_DurationType__Enum
} // namespace app::classes::types
