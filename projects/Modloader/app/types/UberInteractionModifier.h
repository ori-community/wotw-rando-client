#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberInteractionModifier__Class.h>
#include <Modloader/app/structs/UberInteractionModifier.h>

namespace app::classes::types {
    namespace UberInteractionModifier {
        inline app::UberInteractionModifier__Class** type_info = (app::UberInteractionModifier__Class**)(modloader::win::memory::resolve_rva(0x047649B0));
        inline app::UberInteractionModifier__Class* get_class() {
            return il2cpp::get_class<app::UberInteractionModifier__Class>(type_info, "", "UberInteractionModifier");
        }
        inline app::UberInteractionModifier* create() {
            return il2cpp::create_object<app::UberInteractionModifier>(get_class());
        }
    } // namespace UberInteractionModifier
} // namespace app::classes::types
