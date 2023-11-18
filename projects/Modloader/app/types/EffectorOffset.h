#pragma once
#include <Modloader/app/structs/EffectorOffset.h>
#include <Modloader/app/structs/EffectorOffset__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EffectorOffset {
        inline app::EffectorOffset__Class** type_info() {
            static app::EffectorOffset__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EffectorOffset__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EffectorOffset__Class* get_class() {
            return il2cpp::get_class<app::EffectorOffset__Class>(type_info(), "RootMotion.Demos", "EffectorOffset");
        }
        inline app::EffectorOffset* create() {
            return il2cpp::create_object<app::EffectorOffset>(get_class());
        }
    } // namespace EffectorOffset
} // namespace app::classes::types
