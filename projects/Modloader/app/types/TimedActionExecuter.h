#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TimedActionExecuter__Class.h>
#include <Modloader/app/structs/TimedActionExecuter.h>
#include <Modloader/app/structs/TimedActionExecuter__Array.h>

namespace app::classes::types {
    namespace TimedActionExecuter {
        namespace {
            inline app::TimedActionExecuter__Class* type_info_ref = nullptr;
        }
        inline app::TimedActionExecuter__Class** type_info = &type_info_ref;
        inline app::TimedActionExecuter__Class* get_class() {
            return il2cpp::get_class<app::TimedActionExecuter__Class>(type_info, "", "TimedActionExecuter");
        }
        inline app::TimedActionExecuter* create() {
            return il2cpp::create_object<app::TimedActionExecuter>(get_class());
        }
        inline app::TimedActionExecuter__Array* create_array(int size) {
            return il2cpp::array_new<app::TimedActionExecuter__Array>(get_class(), size);
        }
        inline app::TimedActionExecuter__Array* create_array(const std::vector<app::TimedActionExecuter*>& items) {
            return il2cpp::array_new<app::TimedActionExecuter__Array>(get_class(), items);
        }
    } // namespace TimedActionExecuter
} // namespace app::classes::types
