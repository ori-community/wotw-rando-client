#pragma once
#include <Modloader/app/structs/OffsetModifier.h>
#include <Modloader/app/structs/OffsetModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OffsetModifier {
        inline app::OffsetModifier__Class** type_info() {
            static app::OffsetModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OffsetModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OffsetModifier__Class* get_class() {
            return il2cpp::get_class<app::OffsetModifier__Class>(type_info(), "RootMotion.FinalIK", "OffsetModifier");
        }
        inline app::OffsetModifier* create() {
            return il2cpp::create_object<app::OffsetModifier>(get_class());
        }
    } // namespace OffsetModifier
} // namespace app::classes::types
