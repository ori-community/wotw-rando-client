#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PerformSkipAction__Class.h>
#include <Modloader/app/structs/PerformSkipAction.h>

namespace app::classes::types {
    namespace PerformSkipAction {
        namespace {
            inline app::PerformSkipAction__Class* type_info_ref = nullptr;
        }
        inline app::PerformSkipAction__Class** type_info = &type_info_ref;
        inline app::PerformSkipAction__Class* get_class() {
            return il2cpp::get_class<app::PerformSkipAction__Class>(type_info, "", "PerformSkipAction");
        }
        inline app::PerformSkipAction* create() {
            return il2cpp::create_object<app::PerformSkipAction>(get_class());
        }
    } // namespace PerformSkipAction
} // namespace app::classes::types
