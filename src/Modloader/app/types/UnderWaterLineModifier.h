#pragma once
#include <Modloader/app/structs/UnderWaterLineModifier.h>
#include <Modloader/app/structs/UnderWaterLineModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnderWaterLineModifier {
        inline app::UnderWaterLineModifier__Class** type_info() {
            static app::UnderWaterLineModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UnderWaterLineModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UnderWaterLineModifier__Class* get_class() {
            return il2cpp::get_class<app::UnderWaterLineModifier__Class>(type_info(), "", "UnderWaterLineModifier");
        }
        inline app::UnderWaterLineModifier* create() {
            return il2cpp::create_object<app::UnderWaterLineModifier>(get_class());
        }
    } // namespace UnderWaterLineModifier
} // namespace app::classes::types
