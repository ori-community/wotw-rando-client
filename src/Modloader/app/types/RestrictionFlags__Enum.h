#pragma once
#include <Modloader/app/structs/RestrictionFlags__Enum.h>
#include <Modloader/app/structs/RestrictionFlags__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RestrictionFlags__Enum {
        inline app::RestrictionFlags__Enum__Class** type_info() {
            static app::RestrictionFlags__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RestrictionFlags__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RestrictionFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::RestrictionFlags__Enum__Class>(type_info(), "System.Xml.Schema", "RestrictionFlags");
        }
        inline app::RestrictionFlags__Enum* create() {
            return il2cpp::create_object<app::RestrictionFlags__Enum>(get_class());
        }
    } // namespace RestrictionFlags__Enum
} // namespace app::classes::types
