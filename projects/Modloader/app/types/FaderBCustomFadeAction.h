#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FaderBCustomFadeAction__Class.h>
#include <Modloader/app/structs/FaderBCustomFadeAction.h>

namespace app::classes::types {
    namespace FaderBCustomFadeAction {
        namespace {
            inline app::FaderBCustomFadeAction__Class* type_info_ref = nullptr;
        }
        inline app::FaderBCustomFadeAction__Class** type_info = &type_info_ref;
        inline app::FaderBCustomFadeAction__Class* get_class() {
            return il2cpp::get_class<app::FaderBCustomFadeAction__Class>(type_info, "", "FaderBCustomFadeAction");
        }
        inline app::FaderBCustomFadeAction* create() {
            return il2cpp::create_object<app::FaderBCustomFadeAction>(get_class());
        }
    } // namespace FaderBCustomFadeAction
} // namespace app::classes::types
