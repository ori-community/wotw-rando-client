#pragma once
#include <Modloader/app/structs/XObjectChange__Enum.h>
#include <Modloader/app/structs/XObjectChange__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XObjectChange__Enum {
        inline app::XObjectChange__Enum__Class** type_info() {
            static app::XObjectChange__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XObjectChange__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XObjectChange__Enum__Class* get_class() {
            return il2cpp::get_class<app::XObjectChange__Enum__Class>(type_info(), "System.Xml.Linq", "XObjectChange");
        }
        inline app::XObjectChange__Enum* create() {
            return il2cpp::create_object<app::XObjectChange__Enum>(get_class());
        }
    } // namespace XObjectChange__Enum
} // namespace app::classes::types
