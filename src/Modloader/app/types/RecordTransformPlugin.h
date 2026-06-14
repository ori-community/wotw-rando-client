#pragma once
#include <Modloader/app/structs/RecordTransformPlugin.h>
#include <Modloader/app/structs/RecordTransformPlugin__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RecordTransformPlugin {
        inline app::RecordTransformPlugin__Class** type_info() {
            static app::RecordTransformPlugin__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RecordTransformPlugin__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RecordTransformPlugin__Class* get_class() {
            return il2cpp::get_class<app::RecordTransformPlugin__Class>(type_info(), "", "RecordTransformPlugin");
        }
        inline app::RecordTransformPlugin* create() {
            return il2cpp::create_object<app::RecordTransformPlugin>(get_class());
        }
    } // namespace RecordTransformPlugin
} // namespace app::classes::types
