#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FaderBFadeOutAction__Class.h>
#include <Modloader/app/structs/FaderBFadeOutAction.h>

namespace app::classes::types {
    namespace FaderBFadeOutAction {
        namespace {
            inline app::FaderBFadeOutAction__Class* type_info_ref = nullptr;
        }
        inline app::FaderBFadeOutAction__Class** type_info = &type_info_ref;
        inline app::FaderBFadeOutAction__Class* get_class() {
            return il2cpp::get_class<app::FaderBFadeOutAction__Class>(type_info, "", "FaderBFadeOutAction");
        }
        inline app::FaderBFadeOutAction* create() {
            return il2cpp::create_object<app::FaderBFadeOutAction>(get_class());
        }
    } // namespace FaderBFadeOutAction
} // namespace app::classes::types
