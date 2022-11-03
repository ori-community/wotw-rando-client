#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimedActionExecuter__Array {
        namespace {
            inline app::TimedActionExecuter__Array__Class* type_info_ref = nullptr;
        }
        inline app::TimedActionExecuter__Array__Class** type_info = &type_info_ref;
        inline app::TimedActionExecuter__Array__Class* get_class() {
            return il2cpp::get_class<app::TimedActionExecuter__Array__Class>(type_info, "", "TimedActionExecuter[]");
        }
        inline app::TimedActionExecuter__Array* create() {
            return il2cpp::create_object<app::TimedActionExecuter__Array>(get_class());
        }
    } // namespace TimedActionExecuter__Array
} // namespace app::classes::types
