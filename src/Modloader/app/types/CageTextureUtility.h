#pragma once
#include <Modloader/app/structs/CageTextureUtility.h>
#include <Modloader/app/structs/CageTextureUtility__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CageTextureUtility {
        inline app::CageTextureUtility__Class** type_info() {
            static app::CageTextureUtility__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CageTextureUtility__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CageTextureUtility__Class* get_class() {
            return il2cpp::get_class<app::CageTextureUtility__Class>(type_info(), "", "CageTextureUtility");
        }
        inline app::CageTextureUtility* create() {
            return il2cpp::create_object<app::CageTextureUtility>(get_class());
        }
    } // namespace CageTextureUtility
} // namespace app::classes::types
