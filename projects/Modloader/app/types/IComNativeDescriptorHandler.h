#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IComNativeDescriptorHandler {
        inline app::IComNativeDescriptorHandler__Class** type_info = (app::IComNativeDescriptorHandler__Class**)(modloader::win::memory::resolve_rva(0x04704DF0));
        inline app::IComNativeDescriptorHandler__Class* get_class() {
            return il2cpp::get_class<app::IComNativeDescriptorHandler__Class>(type_info, "System.ComponentModel", "IComNativeDescriptorHandler");
        }
    } // namespace IComNativeDescriptorHandler
} // namespace app::classes::types
