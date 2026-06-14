#pragma once
#include <Modloader/app/structs/LegacyUberTransformFollow.h>
#include <Modloader/app/structs/LegacyUberTransformFollow__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyUberTransformFollow {
        inline app::LegacyUberTransformFollow__Class** type_info() {
            static app::LegacyUberTransformFollow__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyUberTransformFollow__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyUberTransformFollow__Class* get_class() {
            return il2cpp::get_class<app::LegacyUberTransformFollow__Class>(type_info(), "", "LegacyUberTransformFollow");
        }
        inline app::LegacyUberTransformFollow* create() {
            return il2cpp::create_object<app::LegacyUberTransformFollow>(get_class());
        }
    } // namespace LegacyUberTransformFollow
} // namespace app::classes::types
