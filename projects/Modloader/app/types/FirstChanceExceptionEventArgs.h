#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FirstChanceExceptionEventArgs {
        namespace {
            inline app::FirstChanceExceptionEventArgs__Class* type_info_ref = nullptr;
        }
        inline app::FirstChanceExceptionEventArgs__Class** type_info = &type_info_ref;
        inline app::FirstChanceExceptionEventArgs__Class* get_class() {
            return il2cpp::get_class<app::FirstChanceExceptionEventArgs__Class>(type_info, "System.Runtime.ExceptionServices", "FirstChanceExceptionEventArgs");
        }
        inline app::FirstChanceExceptionEventArgs* create() {
            return il2cpp::create_object<app::FirstChanceExceptionEventArgs>(get_class());
        }
    } // namespace FirstChanceExceptionEventArgs
} // namespace app::classes::types
