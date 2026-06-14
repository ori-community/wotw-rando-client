#pragma once
#include <Modloader/app/structs/CageStructureToolFill.h>
#include <Modloader/app/structs/CageStructureToolFill__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CageStructureToolFill {
        inline app::CageStructureToolFill__Class** type_info() {
            static app::CageStructureToolFill__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CageStructureToolFill__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CageStructureToolFill__Class* get_class() {
            return il2cpp::get_class<app::CageStructureToolFill__Class>(type_info(), "", "CageStructureToolFill");
        }
        inline app::CageStructureToolFill* create() {
            return il2cpp::create_object<app::CageStructureToolFill>(get_class());
        }
    } // namespace CageStructureToolFill
} // namespace app::classes::types
