#pragma once
#include <Modloader/app/structs/TimedActionExecuter__Array.h>
#include <Modloader/app/structs/TimedActionExecuter__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimedActionExecuter__Array {
        inline app::TimedActionExecuter__Array__Class** type_info() {
            static app::TimedActionExecuter__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimedActionExecuter__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimedActionExecuter__Array__Class* get_class() {
            return il2cpp::get_class<app::TimedActionExecuter__Array__Class>(type_info(), "", "TimedActionExecuter[]");
        }
        inline app::TimedActionExecuter__Array* create() {
            return il2cpp::create_object<app::TimedActionExecuter__Array>(get_class());
        }
    } // namespace TimedActionExecuter__Array
} // namespace app::classes::types
