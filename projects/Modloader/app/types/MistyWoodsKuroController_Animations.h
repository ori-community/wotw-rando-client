#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MistyWoodsKuroController_Animations__Class.h>
#include <Modloader/app/structs/MistyWoodsKuroController_Animations.h>

namespace app::classes::types {
    namespace MistyWoodsKuroController_Animations {
        namespace {
            inline app::MistyWoodsKuroController_Animations__Class* type_info_ref = nullptr;
        }
        inline app::MistyWoodsKuroController_Animations__Class** type_info = &type_info_ref;
        inline app::MistyWoodsKuroController_Animations__Class* get_class() {
            return il2cpp::get_nested_class<app::MistyWoodsKuroController_Animations__Class>(type_info, "", "MistyWoodsKuroController", "Animations");
        }
        inline app::MistyWoodsKuroController_Animations* create() {
            return il2cpp::create_object<app::MistyWoodsKuroController_Animations>(get_class());
        }
    } // namespace MistyWoodsKuroController_Animations
} // namespace app::classes::types
