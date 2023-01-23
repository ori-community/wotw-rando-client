#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UnhandledExceptionEventArgs__Class.h>
#include <Modloader/app/structs/UnhandledExceptionEventArgs.h>

namespace app::classes::types {
    namespace UnhandledExceptionEventArgs {
        namespace {
            inline app::UnhandledExceptionEventArgs__Class* type_info_ref = nullptr;
        }
        inline app::UnhandledExceptionEventArgs__Class** type_info = &type_info_ref;
        inline app::UnhandledExceptionEventArgs__Class* get_class() {
            return il2cpp::get_class<app::UnhandledExceptionEventArgs__Class>(type_info, "System", "UnhandledExceptionEventArgs");
        }
        inline app::UnhandledExceptionEventArgs* create() {
            return il2cpp::create_object<app::UnhandledExceptionEventArgs>(get_class());
        }
    } // namespace UnhandledExceptionEventArgs
} // namespace app::classes::types
