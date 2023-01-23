#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MistyWoodsKuroHideZoneAction__Class.h>
#include <Modloader/app/structs/MistyWoodsKuroHideZoneAction.h>

namespace app::classes::types {
    namespace MistyWoodsKuroHideZoneAction {
        namespace {
            inline app::MistyWoodsKuroHideZoneAction__Class* type_info_ref = nullptr;
        }
        inline app::MistyWoodsKuroHideZoneAction__Class** type_info = &type_info_ref;
        inline app::MistyWoodsKuroHideZoneAction__Class* get_class() {
            return il2cpp::get_class<app::MistyWoodsKuroHideZoneAction__Class>(type_info, "", "MistyWoodsKuroHideZoneAction");
        }
        inline app::MistyWoodsKuroHideZoneAction* create() {
            return il2cpp::create_object<app::MistyWoodsKuroHideZoneAction>(get_class());
        }
    } // namespace MistyWoodsKuroHideZoneAction
} // namespace app::classes::types
