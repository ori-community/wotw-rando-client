#pragma once
#include <Modloader/app/structs/NickGrayboxEntity.h>
#include <Modloader/app/structs/NickGrayboxEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NickGrayboxEntity {
        inline app::NickGrayboxEntity__Class** type_info() {
            static app::NickGrayboxEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NickGrayboxEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NickGrayboxEntity__Class* get_class() {
            return il2cpp::get_class<app::NickGrayboxEntity__Class>(type_info(), "", "NickGrayboxEntity");
        }
        inline app::NickGrayboxEntity* create() {
            return il2cpp::create_object<app::NickGrayboxEntity>(get_class());
        }
    } // namespace NickGrayboxEntity
} // namespace app::classes::types
