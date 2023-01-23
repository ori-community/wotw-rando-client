#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AkBusHierarchyFlags__Enum__Class.h>
#include <Modloader/app/structs/AkBusHierarchyFlags__Enum.h>

namespace app::classes::types {
    namespace AkBusHierarchyFlags__Enum {
        namespace {
            inline app::AkBusHierarchyFlags__Enum__Class* type_info_ref = nullptr;
        }
        inline app::AkBusHierarchyFlags__Enum__Class** type_info = &type_info_ref;
        inline app::AkBusHierarchyFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::AkBusHierarchyFlags__Enum__Class>(type_info, "", "AkBusHierarchyFlags");
        }
        inline app::AkBusHierarchyFlags__Enum* create() {
            return il2cpp::create_object<app::AkBusHierarchyFlags__Enum>(get_class());
        }
    } // namespace AkBusHierarchyFlags__Enum
} // namespace app::classes::types
