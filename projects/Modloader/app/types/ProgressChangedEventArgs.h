#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ProgressChangedEventArgs {
        inline app::ProgressChangedEventArgs__Class** type_info = (app::ProgressChangedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04790450));
        inline app::ProgressChangedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::ProgressChangedEventArgs__Class>(type_info, "System.ComponentModel", "ProgressChangedEventArgs");
        }
        inline app::ProgressChangedEventArgs* create() {
            return il2cpp::create_object<app::ProgressChangedEventArgs>(get_class());
        }
    } // namespace ProgressChangedEventArgs
} // namespace app::classes::types
