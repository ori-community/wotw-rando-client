#pragma once
#include <Modloader/app/structs/FirstChanceExceptionEventArgs.h>
#include <Modloader/app/structs/FirstChanceExceptionEventArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FirstChanceExceptionEventArgs {
        inline app::FirstChanceExceptionEventArgs__Class** type_info() {
            static app::FirstChanceExceptionEventArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FirstChanceExceptionEventArgs__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FirstChanceExceptionEventArgs__Class* get_class() {
            return il2cpp::get_class<app::FirstChanceExceptionEventArgs__Class>(type_info(), "System.Runtime.ExceptionServices", "FirstChanceExceptionEventArgs");
        }
        inline app::FirstChanceExceptionEventArgs* create() {
            return il2cpp::create_object<app::FirstChanceExceptionEventArgs>(get_class());
        }
    } // namespace FirstChanceExceptionEventArgs
} // namespace app::classes::types
