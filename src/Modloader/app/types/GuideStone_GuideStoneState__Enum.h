#pragma once
#include <Modloader/app/structs/GuideStone_GuideStoneState__Enum.h>
#include <Modloader/app/structs/GuideStone_GuideStoneState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GuideStone_GuideStoneState__Enum {
        inline app::GuideStone_GuideStoneState__Enum__Class** type_info() {
            static app::GuideStone_GuideStoneState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GuideStone_GuideStoneState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GuideStone_GuideStoneState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GuideStone_GuideStoneState__Enum__Class>(type_info(), "", "GuideStone", "GuideStoneState");
        }
        inline app::GuideStone_GuideStoneState__Enum* create() {
            return il2cpp::create_object<app::GuideStone_GuideStoneState__Enum>(get_class());
        }
    } // namespace GuideStone_GuideStoneState__Enum
} // namespace app::classes::types
