#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShowWispTextAction__Class.h>
#include <Modloader/app/structs/ShowWispTextAction.h>

namespace app::classes::types {
    namespace ShowWispTextAction {
        namespace {
            inline app::ShowWispTextAction__Class* type_info_ref = nullptr;
        }
        inline app::ShowWispTextAction__Class** type_info = &type_info_ref;
        inline app::ShowWispTextAction__Class* get_class() {
            return il2cpp::get_class<app::ShowWispTextAction__Class>(type_info, "", "ShowWispTextAction");
        }
        inline app::ShowWispTextAction* create() {
            return il2cpp::create_object<app::ShowWispTextAction>(get_class());
        }
    } // namespace ShowWispTextAction
} // namespace app::classes::types
