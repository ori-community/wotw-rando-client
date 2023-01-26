#pragma once
#include <Modloader/app/structs/TimedActionExecuter.h>
#include <Modloader/app/structs/TimedActionExecuter__Array.h>
#include <Modloader/app/structs/TimedActionExecuter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimedActionExecuter {
        inline app::TimedActionExecuter__Class** type_info() {
            static app::TimedActionExecuter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimedActionExecuter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimedActionExecuter__Class* get_class() {
            return il2cpp::get_class<app::TimedActionExecuter__Class>(type_info(), "", "TimedActionExecuter");
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
