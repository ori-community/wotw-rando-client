#pragma once
#include <Modloader/app/structs/OffsetMapModifier.h>
#include <Modloader/app/structs/OffsetMapModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OffsetMapModifier {
        inline app::OffsetMapModifier__Class** type_info() {
            static app::OffsetMapModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OffsetMapModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OffsetMapModifier__Class* get_class() {
            return il2cpp::get_class<app::OffsetMapModifier__Class>(type_info(), "", "OffsetMapModifier");
        }
        inline app::OffsetMapModifier* create() {
            return il2cpp::create_object<app::OffsetMapModifier>(get_class());
        }
    } // namespace OffsetMapModifier
} // namespace app::classes::types
