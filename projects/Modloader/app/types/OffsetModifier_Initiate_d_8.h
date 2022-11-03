#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace OffsetModifier_Initiate_d_8 {
        inline app::OffsetModifier_Initiate_d_8__Class** type_info = (app::OffsetModifier_Initiate_d_8__Class**)(modloader::win::memory::resolve_rva(0x04772B90));
        inline app::OffsetModifier_Initiate_d_8__Class* get_class() {
            return il2cpp::get_nested_class<app::OffsetModifier_Initiate_d_8__Class>(type_info, "RootMotion.FinalIK", "OffsetModifier", "<Initiate>d__8");
        }
        inline app::OffsetModifier_Initiate_d_8* create() {
            return il2cpp::create_object<app::OffsetModifier_Initiate_d_8>(get_class());
        }
    } // namespace OffsetModifier_Initiate_d_8
} // namespace app::classes::types
