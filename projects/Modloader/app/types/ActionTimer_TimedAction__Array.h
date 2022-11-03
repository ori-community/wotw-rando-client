#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ActionTimer_TimedAction__Array {
        namespace {
            inline app::ActionTimer_TimedAction__Array__Class* type_info_ref = nullptr;
        }
        inline app::ActionTimer_TimedAction__Array__Class** type_info = &type_info_ref;
        inline app::ActionTimer_TimedAction__Array__Class* get_class() {
            return il2cpp::get_class<app::ActionTimer_TimedAction__Array__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "ActionTimer+TimedAction[]");
        }
        inline app::ActionTimer_TimedAction__Array* create() {
            return il2cpp::create_object<app::ActionTimer_TimedAction__Array>(get_class());
        }
    } // namespace ActionTimer_TimedAction__Array
} // namespace app::classes::types
