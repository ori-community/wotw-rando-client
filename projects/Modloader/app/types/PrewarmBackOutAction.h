#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PrewarmBackOutAction__Class.h>
#include <Modloader/app/structs/PrewarmBackOutAction.h>

namespace app::classes::types {
    namespace PrewarmBackOutAction {
        namespace {
            inline app::PrewarmBackOutAction__Class* type_info_ref = nullptr;
        }
        inline app::PrewarmBackOutAction__Class** type_info = &type_info_ref;
        inline app::PrewarmBackOutAction__Class* get_class() {
            return il2cpp::get_class<app::PrewarmBackOutAction__Class>(type_info, "", "PrewarmBackOutAction");
        }
        inline app::PrewarmBackOutAction* create() {
            return il2cpp::create_object<app::PrewarmBackOutAction>(get_class());
        }
    } // namespace PrewarmBackOutAction
} // namespace app::classes::types
