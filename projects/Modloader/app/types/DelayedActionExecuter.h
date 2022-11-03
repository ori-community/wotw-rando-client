#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DelayedActionExecuter {
        namespace {
            inline app::DelayedActionExecuter__Class* type_info_ref = nullptr;
        }
        inline app::DelayedActionExecuter__Class** type_info = &type_info_ref;
        inline app::DelayedActionExecuter__Class* get_class() {
            return il2cpp::get_class<app::DelayedActionExecuter__Class>(type_info, "", "DelayedActionExecuter");
        }
        inline app::DelayedActionExecuter* create() {
            return il2cpp::create_object<app::DelayedActionExecuter>(get_class());
        }
    } // namespace DelayedActionExecuter
} // namespace app::classes::types
