#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CageStructureToolFill__Class.h>
#include <Modloader/app/structs/CageStructureToolFill.h>

namespace app::classes::types {
    namespace CageStructureToolFill {
        namespace {
            inline app::CageStructureToolFill__Class* type_info_ref = nullptr;
        }
        inline app::CageStructureToolFill__Class** type_info = &type_info_ref;
        inline app::CageStructureToolFill__Class* get_class() {
            return il2cpp::get_class<app::CageStructureToolFill__Class>(type_info, "", "CageStructureToolFill");
        }
        inline app::CageStructureToolFill* create() {
            return il2cpp::create_object<app::CageStructureToolFill>(get_class());
        }
    } // namespace CageStructureToolFill
} // namespace app::classes::types
