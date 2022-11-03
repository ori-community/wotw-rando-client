#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkObstructionOcclusionValues {
        inline app::AkObstructionOcclusionValues__Class** type_info = (app::AkObstructionOcclusionValues__Class**)(modloader::win::memory::resolve_rva(0x047498D0));
        inline app::AkObstructionOcclusionValues__Class* get_class() {
            return il2cpp::get_class<app::AkObstructionOcclusionValues__Class>(type_info, "", "AkObstructionOcclusionValues");
        }
        inline app::AkObstructionOcclusionValues* create() {
            return il2cpp::create_object<app::AkObstructionOcclusionValues>(get_class());
        }
    } // namespace AkObstructionOcclusionValues
} // namespace app::classes::types
