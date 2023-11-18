#pragma once
#include <Modloader/app/structs/AkBusHierarchyFlags__Enum.h>
#include <Modloader/app/structs/AkBusHierarchyFlags__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkBusHierarchyFlags__Enum {
        inline app::AkBusHierarchyFlags__Enum__Class** type_info() {
            static app::AkBusHierarchyFlags__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkBusHierarchyFlags__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkBusHierarchyFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::AkBusHierarchyFlags__Enum__Class>(type_info(), "", "AkBusHierarchyFlags");
        }
        inline app::AkBusHierarchyFlags__Enum* create() {
            return il2cpp::create_object<app::AkBusHierarchyFlags__Enum>(get_class());
        }
    } // namespace AkBusHierarchyFlags__Enum
} // namespace app::classes::types
