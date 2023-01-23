#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CageStructureToolCollider__Class.h>
#include <Modloader/app/structs/CageStructureToolCollider.h>

namespace app::classes::types {
    namespace CageStructureToolCollider {
        namespace {
            inline app::CageStructureToolCollider__Class* type_info_ref = nullptr;
        }
        inline app::CageStructureToolCollider__Class** type_info = &type_info_ref;
        inline app::CageStructureToolCollider__Class* get_class() {
            return il2cpp::get_class<app::CageStructureToolCollider__Class>(type_info, "", "CageStructureToolCollider");
        }
        inline app::CageStructureToolCollider* create() {
            return il2cpp::create_object<app::CageStructureToolCollider>(get_class());
        }
    } // namespace CageStructureToolCollider
} // namespace app::classes::types
