#pragma once
#include <Modloader/app/structs/LZData.h>
#include <Modloader/app/structs/LZData__Boxed.h>
#include <Modloader/app/structs/LZData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LZData {
        inline app::LZData__Class** type_info() {
            static app::LZData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LZData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LZData__Class* get_class() {
            return il2cpp::get_class<app::LZData__Class>(type_info(), "Moon.Wwise", "LZData");
        }
        inline app::LZData* create() {
            return il2cpp::create_object<app::LZData>(get_class());
        }
        inline app::LZData__Boxed* box(app::LZData value) {
            return il2cpp::box_value<app::LZData__Boxed>(get_class(), value);
        }
    } // namespace LZData
} // namespace app::classes::types
