#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TimerThread_TimerThreadState__Enum__Class.h>
#include <Modloader/app/structs/TimerThread_TimerThreadState__Enum.h>

namespace app::classes::types {
    namespace TimerThread_TimerThreadState__Enum {
        namespace {
            inline app::TimerThread_TimerThreadState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::TimerThread_TimerThreadState__Enum__Class** type_info = &type_info_ref;
        inline app::TimerThread_TimerThreadState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::TimerThread_TimerThreadState__Enum__Class>(type_info, "System.Net", "TimerThread", "TimerThreadState");
        }
        inline app::TimerThread_TimerThreadState__Enum* create() {
            return il2cpp::create_object<app::TimerThread_TimerThreadState__Enum>(get_class());
        }
    } // namespace TimerThread_TimerThreadState__Enum
} // namespace app::classes::types
