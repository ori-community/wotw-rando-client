#pragma once
#include <Modloader/app/structs/ProgressChangedEventArgs.h>
#include <Modloader/app/structs/ProgressChangedEventArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ProgressChangedEventArgs {
        inline app::ProgressChangedEventArgs__Class** type_info() {
            static app::ProgressChangedEventArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ProgressChangedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04790450));
            }
            return cache;
        }
        inline app::ProgressChangedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::ProgressChangedEventArgs__Class>(type_info(), "System.ComponentModel", "ProgressChangedEventArgs");
        }
        inline app::ProgressChangedEventArgs* create() {
            return il2cpp::create_object<app::ProgressChangedEventArgs>(get_class());
        }
    } // namespace ProgressChangedEventArgs
} // namespace app::classes::types
