#pragma once
#include <Modloader/app/structs/MoonFlagsSystem_HiddenFlagModification.h>
#include <Modloader/app/structs/MoonFlagsSystem_HiddenFlagModification__Boxed.h>
#include <Modloader/app/structs/MoonFlagsSystem_HiddenFlagModification__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonFlagsSystem_HiddenFlagModification {
        inline app::MoonFlagsSystem_HiddenFlagModification__Class** type_info() {
            static app::MoonFlagsSystem_HiddenFlagModification__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonFlagsSystem_HiddenFlagModification__Class**)(modloader::win::memory::resolve_rva(0x047146E0));
            }
            return cache;
        }
        inline app::MoonFlagsSystem_HiddenFlagModification__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonFlagsSystem_HiddenFlagModification__Class>(type_info(), "", "MoonFlagsSystem", "HiddenFlagModification");
        }
        inline app::MoonFlagsSystem_HiddenFlagModification* create() {
            return il2cpp::create_object<app::MoonFlagsSystem_HiddenFlagModification>(get_class());
        }
        inline app::MoonFlagsSystem_HiddenFlagModification__Boxed* box(app::MoonFlagsSystem_HiddenFlagModification value) {
            return il2cpp::box_value<app::MoonFlagsSystem_HiddenFlagModification__Boxed>(get_class(), value);
        }
    } // namespace MoonFlagsSystem_HiddenFlagModification
} // namespace app::classes::types
