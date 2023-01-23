#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FadeFromBlackAction__Class.h>
#include <Modloader/app/structs/FadeFromBlackAction.h>

namespace app::classes::types {
    namespace FadeFromBlackAction {
        namespace {
            inline app::FadeFromBlackAction__Class* type_info_ref = nullptr;
        }
        inline app::FadeFromBlackAction__Class** type_info = &type_info_ref;
        inline app::FadeFromBlackAction__Class* get_class() {
            return il2cpp::get_class<app::FadeFromBlackAction__Class>(type_info, "", "FadeFromBlackAction");
        }
        inline app::FadeFromBlackAction* create() {
            return il2cpp::create_object<app::FadeFromBlackAction>(get_class());
        }
    } // namespace FadeFromBlackAction
} // namespace app::classes::types
