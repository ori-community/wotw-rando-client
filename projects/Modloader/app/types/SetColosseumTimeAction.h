#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SetColosseumTimeAction {
        namespace {
            inline app::SetColosseumTimeAction__Class* type_info_ref = nullptr;
        }
        inline app::SetColosseumTimeAction__Class** type_info = &type_info_ref;
        inline app::SetColosseumTimeAction__Class* get_class() {
            return il2cpp::get_class<app::SetColosseumTimeAction__Class>(type_info, "", "SetColosseumTimeAction");
        }
        inline app::SetColosseumTimeAction* create() {
            return il2cpp::create_object<app::SetColosseumTimeAction>(get_class());
        }
    } // namespace SetColosseumTimeAction
} // namespace app::classes::types
