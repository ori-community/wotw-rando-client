#pragma once
#include <Modloader/app/structs/TransformProvider.h>
#include <Modloader/app/structs/TransformProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TransformProvider {
        inline app::TransformProvider__Class** type_info() {
            static app::TransformProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TransformProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TransformProvider__Class* get_class() {
            return il2cpp::get_class<app::TransformProvider__Class>(type_info(), "", "TransformProvider");
        }
        inline app::TransformProvider* create() {
            return il2cpp::create_object<app::TransformProvider>(get_class());
        }
    } // namespace TransformProvider
} // namespace app::classes::types
