#pragma once
#include <Modloader/app/structs/GuideStone.h>
#include <Modloader/app/structs/GuideStone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GuideStone {
        inline app::GuideStone__Class** type_info() {
            static app::GuideStone__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GuideStone__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GuideStone__Class* get_class() {
            return il2cpp::get_class<app::GuideStone__Class>(type_info(), "", "GuideStone");
        }
        inline app::GuideStone* create() {
            return il2cpp::create_object<app::GuideStone>(get_class());
        }
    } // namespace GuideStone
} // namespace app::classes::types
