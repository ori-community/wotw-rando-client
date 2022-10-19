#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CageStructureTool_Edge__Array {
        namespace {
            inline app::CageStructureTool_Edge__Array__Class* type_info_ref = nullptr;
        }
        inline app::CageStructureTool_Edge__Array__Class** type_info = &type_info_ref;
        inline app::CageStructureTool_Edge__Array__Class* get_class() {
            return il2cpp::get_class<app::CageStructureTool_Edge__Array__Class>(type_info, "", "CageStructureTool+Edge[]");
        }
        inline app::CageStructureTool_Edge__Array* create() {
            return il2cpp::create_object<app::CageStructureTool_Edge__Array>(get_class());
        }
    } // namespace CageStructureTool_Edge__Array
} // namespace app::classes::types
