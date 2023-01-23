#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CageStructureTool__Array__Class.h>
#include <Modloader/app/structs/CageStructureTool__Array.h>

namespace app::classes::types {
    namespace CageStructureTool__Array {
        namespace {
            inline app::CageStructureTool__Array__Class* type_info_ref = nullptr;
        }
        inline app::CageStructureTool__Array__Class** type_info = &type_info_ref;
        inline app::CageStructureTool__Array__Class* get_class() {
            return il2cpp::get_class<app::CageStructureTool__Array__Class>(type_info, "", "CageStructureTool[]");
        }
        inline app::CageStructureTool__Array* create() {
            return il2cpp::create_object<app::CageStructureTool__Array>(get_class());
        }
    } // namespace CageStructureTool__Array
} // namespace app::classes::types
