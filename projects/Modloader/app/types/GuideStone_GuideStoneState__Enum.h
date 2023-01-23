#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GuideStone_GuideStoneState__Enum__Class.h>
#include <Modloader/app/structs/GuideStone_GuideStoneState__Enum.h>

namespace app::classes::types {
    namespace GuideStone_GuideStoneState__Enum {
        namespace {
            inline app::GuideStone_GuideStoneState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::GuideStone_GuideStoneState__Enum__Class** type_info = &type_info_ref;
        inline app::GuideStone_GuideStoneState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GuideStone_GuideStoneState__Enum__Class>(type_info, "", "GuideStone", "GuideStoneState");
        }
        inline app::GuideStone_GuideStoneState__Enum* create() {
            return il2cpp::create_object<app::GuideStone_GuideStoneState__Enum>(get_class());
        }
    } // namespace GuideStone_GuideStoneState__Enum
} // namespace app::classes::types
