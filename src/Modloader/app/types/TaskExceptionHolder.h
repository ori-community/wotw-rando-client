#pragma once
#include <Modloader/app/structs/TaskExceptionHolder.h>
#include <Modloader/app/structs/TaskExceptionHolder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TaskExceptionHolder {
        inline app::TaskExceptionHolder__Class** type_info() {
            static app::TaskExceptionHolder__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TaskExceptionHolder__Class**)(modloader::win::memory::resolve_rva(0x04756E18));
            }
            return cache;
        }
        inline app::TaskExceptionHolder__Class* get_class() {
            return il2cpp::get_class<app::TaskExceptionHolder__Class>(type_info(), "System.Threading.Tasks", "TaskExceptionHolder");
        }
        inline app::TaskExceptionHolder* create() {
            return il2cpp::create_object<app::TaskExceptionHolder>(get_class());
        }
    } // namespace TaskExceptionHolder
} // namespace app::classes::types
