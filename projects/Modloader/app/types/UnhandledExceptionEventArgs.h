#pragma once
#include <Modloader/app/structs/UnhandledExceptionEventArgs.h>
#include <Modloader/app/structs/UnhandledExceptionEventArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnhandledExceptionEventArgs {
        inline app::UnhandledExceptionEventArgs__Class** type_info() {
            static app::UnhandledExceptionEventArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UnhandledExceptionEventArgs__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UnhandledExceptionEventArgs__Class* get_class() {
            return il2cpp::get_class<app::UnhandledExceptionEventArgs__Class>(type_info(), "System", "UnhandledExceptionEventArgs");
        }
        inline app::UnhandledExceptionEventArgs* create() {
            return il2cpp::create_object<app::UnhandledExceptionEventArgs>(get_class());
        }
    } // namespace UnhandledExceptionEventArgs
} // namespace app::classes::types
