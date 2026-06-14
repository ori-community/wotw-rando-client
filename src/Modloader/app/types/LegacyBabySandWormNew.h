#pragma once
#include <Modloader/app/structs/LegacyBabySandWormNew.h>
#include <Modloader/app/structs/LegacyBabySandWormNew__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyBabySandWormNew {
        inline app::LegacyBabySandWormNew__Class** type_info() {
            static app::LegacyBabySandWormNew__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyBabySandWormNew__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyBabySandWormNew__Class* get_class() {
            return il2cpp::get_class<app::LegacyBabySandWormNew__Class>(type_info(), "", "LegacyBabySandWormNew");
        }
        inline app::LegacyBabySandWormNew* create() {
            return il2cpp::create_object<app::LegacyBabySandWormNew>(get_class());
        }
    } // namespace LegacyBabySandWormNew
} // namespace app::classes::types
