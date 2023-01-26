#pragma once
#include <Modloader/app/structs/LightCanvas_SaveMetaData.h>
#include <Modloader/app/structs/LightCanvas_SaveMetaData__Boxed.h>
#include <Modloader/app/structs/LightCanvas_SaveMetaData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LightCanvas_SaveMetaData {
        inline app::LightCanvas_SaveMetaData__Class** type_info() {
            static app::LightCanvas_SaveMetaData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LightCanvas_SaveMetaData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LightCanvas_SaveMetaData__Class* get_class() {
            return il2cpp::get_nested_class<app::LightCanvas_SaveMetaData__Class>(type_info(), "", "LightCanvas", "SaveMetaData");
        }
        inline app::LightCanvas_SaveMetaData* create() {
            return il2cpp::create_object<app::LightCanvas_SaveMetaData>(get_class());
        }
        inline app::LightCanvas_SaveMetaData__Boxed* box(app::LightCanvas_SaveMetaData value) {
            return il2cpp::box_value<app::LightCanvas_SaveMetaData__Boxed>(get_class(), value);
        }
    } // namespace LightCanvas_SaveMetaData
} // namespace app::classes::types
