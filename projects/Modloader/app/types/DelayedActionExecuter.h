#pragma once
#include <Modloader/app/structs/DelayedActionExecuter.h>
#include <Modloader/app/structs/DelayedActionExecuter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DelayedActionExecuter {
        inline app::DelayedActionExecuter__Class** type_info() {
            static app::DelayedActionExecuter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DelayedActionExecuter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DelayedActionExecuter__Class* get_class() {
            return il2cpp::get_class<app::DelayedActionExecuter__Class>(type_info(), "", "DelayedActionExecuter");
        }
        inline app::DelayedActionExecuter* create() {
            return il2cpp::create_object<app::DelayedActionExecuter>(get_class());
        }
    } // namespace DelayedActionExecuter
} // namespace app::classes::types
