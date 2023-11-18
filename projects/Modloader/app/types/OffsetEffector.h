#pragma once
#include <Modloader/app/structs/OffsetEffector.h>
#include <Modloader/app/structs/OffsetEffector__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OffsetEffector {
        inline app::OffsetEffector__Class** type_info() {
            static app::OffsetEffector__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OffsetEffector__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OffsetEffector__Class* get_class() {
            return il2cpp::get_class<app::OffsetEffector__Class>(type_info(), "RootMotion.Demos", "OffsetEffector");
        }
        inline app::OffsetEffector* create() {
            return il2cpp::create_object<app::OffsetEffector>(get_class());
        }
    } // namespace OffsetEffector
} // namespace app::classes::types
