#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace InteractionRotationModifier {
        inline app::InteractionRotationModifier__Class** type_info = (app::InteractionRotationModifier__Class**)(modloader::win::memory::resolve_rva(0x0475E588));
        inline app::InteractionRotationModifier__Class* get_class() {
            return il2cpp::get_class<app::InteractionRotationModifier__Class>(type_info, "", "InteractionRotationModifier");
        }
        inline app::InteractionRotationModifier* create() {
            return il2cpp::create_object<app::InteractionRotationModifier>(get_class());
        }
    } // namespace InteractionRotationModifier
} // namespace app::classes::types
