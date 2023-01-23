#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MaterialBasedResourceMap__Class.h>
#include <Modloader/app/structs/MaterialBasedResourceMap.h>

namespace app::classes::types {
    namespace MaterialBasedResourceMap {
        namespace {
            inline app::MaterialBasedResourceMap__Class* type_info_ref = nullptr;
        }
        inline app::MaterialBasedResourceMap__Class** type_info = &type_info_ref;
        inline app::MaterialBasedResourceMap__Class* get_class() {
            return il2cpp::get_class<app::MaterialBasedResourceMap__Class>(type_info, "", "MaterialBasedResourceMap");
        }
        inline app::MaterialBasedResourceMap* create() {
            return il2cpp::create_object<app::MaterialBasedResourceMap>(get_class());
        }
    } // namespace MaterialBasedResourceMap
} // namespace app::classes::types
