#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Javascript__Class.h>
#include <Modloader/app/structs/Javascript.h>
#include <Modloader/app/structs/Javascript__Array.h>

namespace app::classes::types {
    namespace Javascript {
        namespace {
            inline app::Javascript__Class* type_info_ref = nullptr;
        }
        inline app::Javascript__Class** type_info = &type_info_ref;
        inline app::Javascript__Class* get_class() {
            return il2cpp::get_class<app::Javascript__Class>(type_info, "Microsoft.Applications.Events.DataModels", "Javascript");
        }
        inline app::Javascript* create() {
            return il2cpp::create_object<app::Javascript>(get_class());
        }
        inline app::Javascript__Array* create_array(int size) {
            return il2cpp::array_new<app::Javascript__Array>(get_class(), size);
        }
        inline app::Javascript__Array* create_array(const std::vector<app::Javascript*>& items) {
            return il2cpp::array_new<app::Javascript__Array>(get_class(), items);
        }
    } // namespace Javascript
} // namespace app::classes::types
