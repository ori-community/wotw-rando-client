#pragma once
#include <Modloader/app/structs/MoonTypeExtraData.h>
#include <Modloader/app/structs/MoonTypeExtraData__Boxed.h>
#include <Modloader/app/structs/MoonTypeExtraData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTypeExtraData {
        inline app::MoonTypeExtraData__Class** type_info() {
            static app::MoonTypeExtraData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonTypeExtraData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonTypeExtraData__Class* get_class() {
            return il2cpp::get_class<app::MoonTypeExtraData__Class>(type_info(), "Moon", "MoonTypeExtraData");
        }
        inline app::MoonTypeExtraData* create() {
            return il2cpp::create_object<app::MoonTypeExtraData>(get_class());
        }
        inline app::MoonTypeExtraData__Boxed* box(app::MoonTypeExtraData value) {
            return il2cpp::box_value<app::MoonTypeExtraData__Boxed>(get_class(), value);
        }
    } // namespace MoonTypeExtraData
} // namespace app::classes::types
