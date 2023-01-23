#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DynamicGraphicHierarchy__Class.h>
#include <Modloader/app/structs/DynamicGraphicHierarchy.h>

namespace app::classes::types {
    namespace DynamicGraphicHierarchy {
        namespace {
            inline app::DynamicGraphicHierarchy__Class* type_info_ref = nullptr;
        }
        inline app::DynamicGraphicHierarchy__Class** type_info = &type_info_ref;
        inline app::DynamicGraphicHierarchy__Class* get_class() {
            return il2cpp::get_class<app::DynamicGraphicHierarchy__Class>(type_info, "", "DynamicGraphicHierarchy");
        }
        inline app::DynamicGraphicHierarchy* create() {
            return il2cpp::create_object<app::DynamicGraphicHierarchy>(get_class());
        }
    } // namespace DynamicGraphicHierarchy
} // namespace app::classes::types
