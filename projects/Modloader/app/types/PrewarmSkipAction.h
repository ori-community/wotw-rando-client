#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PrewarmSkipAction__Class.h>
#include <Modloader/app/structs/PrewarmSkipAction.h>

namespace app::classes::types {
    namespace PrewarmSkipAction {
        namespace {
            inline app::PrewarmSkipAction__Class* type_info_ref = nullptr;
        }
        inline app::PrewarmSkipAction__Class** type_info = &type_info_ref;
        inline app::PrewarmSkipAction__Class* get_class() {
            return il2cpp::get_class<app::PrewarmSkipAction__Class>(type_info, "", "PrewarmSkipAction");
        }
        inline app::PrewarmSkipAction* create() {
            return il2cpp::create_object<app::PrewarmSkipAction>(get_class());
        }
    } // namespace PrewarmSkipAction
} // namespace app::classes::types
