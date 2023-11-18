#pragma once
#include <Modloader/app/structs/UnobservedTaskExceptionEventArgs.h>
#include <Modloader/app/structs/UnobservedTaskExceptionEventArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnobservedTaskExceptionEventArgs {
        inline app::UnobservedTaskExceptionEventArgs__Class** type_info() {
            static app::UnobservedTaskExceptionEventArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UnobservedTaskExceptionEventArgs__Class**)(modloader::win::memory::resolve_rva(0x0478E2E0));
            }
            return cache;
        }
        inline app::UnobservedTaskExceptionEventArgs__Class* get_class() {
            return il2cpp::get_class<app::UnobservedTaskExceptionEventArgs__Class>(type_info(), "System.Threading.Tasks", "UnobservedTaskExceptionEventArgs");
        }
        inline app::UnobservedTaskExceptionEventArgs* create() {
            return il2cpp::create_object<app::UnobservedTaskExceptionEventArgs>(get_class());
        }
    } // namespace UnobservedTaskExceptionEventArgs
} // namespace app::classes::types
