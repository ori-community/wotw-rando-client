#pragma once
#include <Modloader/app/structs/ClothCage.h>
#include <Modloader/app/structs/ClothCage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ClothCage {
        inline app::ClothCage__Class** type_info() {
            static app::ClothCage__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ClothCage__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ClothCage__Class* get_class() {
            return il2cpp::get_class<app::ClothCage__Class>(type_info(), "", "ClothCage");
        }
        inline app::ClothCage* create() {
            return il2cpp::create_object<app::ClothCage>(get_class());
        }
    } // namespace ClothCage
} // namespace app::classes::types
