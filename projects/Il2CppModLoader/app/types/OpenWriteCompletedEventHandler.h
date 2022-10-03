#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OpenWriteCompletedEventHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OpenWriteCompletedEventHandler__Class** type_info;
        inline app::OpenWriteCompletedEventHandler__Class* get_class() {
            return il2cpp::get_class<app::OpenWriteCompletedEventHandler__Class>(type_info, "System.Net", "OpenWriteCompletedEventHandler");
        }
        inline app::OpenWriteCompletedEventHandler* create() {
            return il2cpp::create_object<app::OpenWriteCompletedEventHandler>(get_class());
        }
    } // namespace OpenWriteCompletedEventHandler
} // namespace app::classes::types
