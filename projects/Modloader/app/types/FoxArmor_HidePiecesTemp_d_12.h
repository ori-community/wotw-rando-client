#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FoxArmor_HidePiecesTemp_d_12 {
        inline app::FoxArmor_HidePiecesTemp_d_12__Class** type_info = (app::FoxArmor_HidePiecesTemp_d_12__Class**)(modloader::win::memory::resolve_rva(0x04759CE8));
        inline app::FoxArmor_HidePiecesTemp_d_12__Class* get_class() {
            return il2cpp::get_nested_class<app::FoxArmor_HidePiecesTemp_d_12__Class>(type_info, "", "FoxArmor", "<HidePiecesTemp>d__12");
        }
        inline app::FoxArmor_HidePiecesTemp_d_12* create() {
            return il2cpp::create_object<app::FoxArmor_HidePiecesTemp_d_12>(get_class());
        }
    } // namespace FoxArmor_HidePiecesTemp_d_12
} // namespace app::classes::types
