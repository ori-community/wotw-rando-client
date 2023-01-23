#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Javascript__Array__Class.h>
#include <Modloader/app/structs/Javascript__Array.h>

namespace app::classes::types {
    namespace Javascript__Array {
        namespace {
            inline app::Javascript__Array__Class* type_info_ref = nullptr;
        }
        inline app::Javascript__Array__Class** type_info = &type_info_ref;
        inline app::Javascript__Array__Class* get_class() {
            return il2cpp::get_class<app::Javascript__Array__Class>(type_info, "Microsoft.Applications.Events.DataModels", "Javascript[]");
        }
        inline app::Javascript__Array* create() {
            return il2cpp::create_object<app::Javascript__Array>(get_class());
        }
    } // namespace Javascript__Array
} // namespace app::classes::types
