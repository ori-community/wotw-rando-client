#pragma once
#include <Modloader/app/structs/ElementProperties__Enum.h>
#include <Modloader/app/structs/ElementProperties__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ElementProperties__Enum {
        inline app::ElementProperties__Enum__Class** type_info() {
            static app::ElementProperties__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ElementProperties__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ElementProperties__Enum__Class* get_class() {
            return il2cpp::get_class<app::ElementProperties__Enum__Class>(type_info(), "System.Xml", "ElementProperties");
        }
        inline app::ElementProperties__Enum* create() {
            return il2cpp::create_object<app::ElementProperties__Enum>(get_class());
        }
    } // namespace ElementProperties__Enum
} // namespace app::classes::types
