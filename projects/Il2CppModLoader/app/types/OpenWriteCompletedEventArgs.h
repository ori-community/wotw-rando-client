#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace OpenWriteCompletedEventArgs {
        inline app::OpenWriteCompletedEventArgs__Class** type_info = (app::OpenWriteCompletedEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04732470));
        inline app::OpenWriteCompletedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::OpenWriteCompletedEventArgs__Class>(type_info, "System.Net", "OpenWriteCompletedEventArgs");
        }
        inline app::OpenWriteCompletedEventArgs* create() {
            return il2cpp::create_object<app::OpenWriteCompletedEventArgs>(get_class());
        }
    } // namespace OpenWriteCompletedEventArgs
} // namespace app::classes::types
