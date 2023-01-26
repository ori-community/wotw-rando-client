#pragma once
#include <Modloader/app/structs/Amplifier.h>
#include <Modloader/app/structs/Amplifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Amplifier {
        inline app::Amplifier__Class** type_info() {
            static app::Amplifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Amplifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Amplifier__Class* get_class() {
            return il2cpp::get_class<app::Amplifier__Class>(type_info(), "RootMotion.FinalIK", "Amplifier");
        }
        inline app::Amplifier* create() {
            return il2cpp::create_object<app::Amplifier>(get_class());
        }
    } // namespace Amplifier
} // namespace app::classes::types
