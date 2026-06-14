#pragma once
#include <Modloader/app/structs/AkObstructionOcclusionValuesArray.h>
#include <Modloader/app/structs/AkObstructionOcclusionValuesArray__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkObstructionOcclusionValuesArray {
        inline app::AkObstructionOcclusionValuesArray__Class** type_info() {
            static app::AkObstructionOcclusionValuesArray__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkObstructionOcclusionValuesArray__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkObstructionOcclusionValuesArray__Class* get_class() {
            return il2cpp::get_class<app::AkObstructionOcclusionValuesArray__Class>(type_info(), "", "AkObstructionOcclusionValuesArray");
        }
        inline app::AkObstructionOcclusionValuesArray* create() {
            return il2cpp::create_object<app::AkObstructionOcclusionValuesArray>(get_class());
        }
    } // namespace AkObstructionOcclusionValuesArray
} // namespace app::classes::types
