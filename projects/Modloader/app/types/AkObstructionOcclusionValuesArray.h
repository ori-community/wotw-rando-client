#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AkObstructionOcclusionValuesArray__Class.h>
#include <Modloader/app/structs/AkObstructionOcclusionValuesArray.h>

namespace app::classes::types {
    namespace AkObstructionOcclusionValuesArray {
        namespace {
            inline app::AkObstructionOcclusionValuesArray__Class* type_info_ref = nullptr;
        }
        inline app::AkObstructionOcclusionValuesArray__Class** type_info = &type_info_ref;
        inline app::AkObstructionOcclusionValuesArray__Class* get_class() {
            return il2cpp::get_class<app::AkObstructionOcclusionValuesArray__Class>(type_info, "", "AkObstructionOcclusionValuesArray");
        }
        inline app::AkObstructionOcclusionValuesArray* create() {
            return il2cpp::create_object<app::AkObstructionOcclusionValuesArray>(get_class());
        }
    } // namespace AkObstructionOcclusionValuesArray
} // namespace app::classes::types
