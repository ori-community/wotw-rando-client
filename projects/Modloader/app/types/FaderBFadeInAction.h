#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FaderBFadeInAction {
        namespace {
            inline app::FaderBFadeInAction__Class* type_info_ref = nullptr;
        }
        inline app::FaderBFadeInAction__Class** type_info = &type_info_ref;
        inline app::FaderBFadeInAction__Class* get_class() {
            return il2cpp::get_class<app::FaderBFadeInAction__Class>(type_info, "", "FaderBFadeInAction");
        }
        inline app::FaderBFadeInAction* create() {
            return il2cpp::create_object<app::FaderBFadeInAction>(get_class());
        }
    } // namespace FaderBFadeInAction
} // namespace app::classes::types
