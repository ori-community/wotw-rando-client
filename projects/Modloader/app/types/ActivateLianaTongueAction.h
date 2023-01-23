#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ActivateLianaTongueAction__Class.h>
#include <Modloader/app/structs/ActivateLianaTongueAction.h>

namespace app::classes::types {
    namespace ActivateLianaTongueAction {
        namespace {
            inline app::ActivateLianaTongueAction__Class* type_info_ref = nullptr;
        }
        inline app::ActivateLianaTongueAction__Class** type_info = &type_info_ref;
        inline app::ActivateLianaTongueAction__Class* get_class() {
            return il2cpp::get_class<app::ActivateLianaTongueAction__Class>(type_info, "", "ActivateLianaTongueAction");
        }
        inline app::ActivateLianaTongueAction* create() {
            return il2cpp::create_object<app::ActivateLianaTongueAction>(get_class());
        }
    } // namespace ActivateLianaTongueAction
} // namespace app::classes::types
