#pragma once
#include <Modloader/app/structs/TransformOffsetter.h>
#include <Modloader/app/structs/TransformOffsetter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TransformOffsetter {
        inline app::TransformOffsetter__Class** type_info() {
            static app::TransformOffsetter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TransformOffsetter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TransformOffsetter__Class* get_class() {
            return il2cpp::get_class<app::TransformOffsetter__Class>(type_info(), "", "TransformOffsetter");
        }
        inline app::TransformOffsetter* create() {
            return il2cpp::create_object<app::TransformOffsetter>(get_class());
        }
    } // namespace TransformOffsetter
} // namespace app::classes::types
