#pragma once
#include <Modloader/app/structs/PositionStateModifier.h>
#include <Modloader/app/structs/PositionStateModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PositionStateModifier {
        inline app::PositionStateModifier__Class** type_info() {
            static app::PositionStateModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PositionStateModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PositionStateModifier__Class* get_class() {
            return il2cpp::get_class<app::PositionStateModifier__Class>(type_info(), "", "PositionStateModifier");
        }
        inline app::PositionStateModifier* create() {
            return il2cpp::create_object<app::PositionStateModifier>(get_class());
        }
    } // namespace PositionStateModifier
} // namespace app::classes::types
