#pragma once
#include <Modloader/app/structs/AkObstructionOcclusionValues.h>
#include <Modloader/app/structs/AkObstructionOcclusionValues__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkObstructionOcclusionValues {
        inline app::AkObstructionOcclusionValues__Class** type_info() {
            static app::AkObstructionOcclusionValues__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkObstructionOcclusionValues__Class**)(modloader::win::memory::resolve_rva(0x047498D0));
            }
            return cache;
        }
        inline app::AkObstructionOcclusionValues__Class* get_class() {
            return il2cpp::get_class<app::AkObstructionOcclusionValues__Class>(type_info(), "", "AkObstructionOcclusionValues");
        }
        inline app::AkObstructionOcclusionValues* create() {
            return il2cpp::create_object<app::AkObstructionOcclusionValues>(get_class());
        }
    } // namespace AkObstructionOcclusionValues
} // namespace app::classes::types
