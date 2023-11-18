#pragma once
#include <Modloader/app/structs/AttributeMatchState__Enum.h>
#include <Modloader/app/structs/AttributeMatchState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AttributeMatchState__Enum {
        inline app::AttributeMatchState__Enum__Class** type_info() {
            static app::AttributeMatchState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AttributeMatchState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AttributeMatchState__Enum__Class* get_class() {
            return il2cpp::get_class<app::AttributeMatchState__Enum__Class>(type_info(), "System.Xml.Schema", "AttributeMatchState");
        }
        inline app::AttributeMatchState__Enum* create() {
            return il2cpp::create_object<app::AttributeMatchState__Enum>(get_class());
        }
    } // namespace AttributeMatchState__Enum
} // namespace app::classes::types
