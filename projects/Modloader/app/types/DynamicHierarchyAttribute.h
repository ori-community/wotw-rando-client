#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DynamicHierarchyAttribute__Class.h>
#include <Modloader/app/structs/DynamicHierarchyAttribute.h>

namespace app::classes::types {
    namespace DynamicHierarchyAttribute {
        namespace {
            inline app::DynamicHierarchyAttribute__Class* type_info_ref = nullptr;
        }
        inline app::DynamicHierarchyAttribute__Class** type_info = &type_info_ref;
        inline app::DynamicHierarchyAttribute__Class* get_class() {
            return il2cpp::get_class<app::DynamicHierarchyAttribute__Class>(type_info, "", "DynamicHierarchyAttribute");
        }
        inline app::DynamicHierarchyAttribute* create() {
            return il2cpp::create_object<app::DynamicHierarchyAttribute>(get_class());
        }
    } // namespace DynamicHierarchyAttribute
} // namespace app::classes::types
