#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EventWaitHandle {
        namespace {
            inline app::EventWaitHandle__Class* type_info_ref = nullptr;
        }
        inline app::EventWaitHandle__Class** type_info = &type_info_ref;
        inline app::EventWaitHandle__Class* get_class() {
            return il2cpp::get_class<app::EventWaitHandle__Class>(type_info, "System.Threading", "EventWaitHandle");
        }
        inline app::EventWaitHandle* create() {
            return il2cpp::create_object<app::EventWaitHandle>(get_class());
        }
    } // namespace EventWaitHandle
} // namespace app::classes::types
