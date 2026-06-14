#pragma once
#include <Modloader/app/structs/IComNativeDescriptorHandler.h>
#include <Modloader/app/structs/IComNativeDescriptorHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IComNativeDescriptorHandler {
        inline app::IComNativeDescriptorHandler__Class** type_info() {
            static app::IComNativeDescriptorHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IComNativeDescriptorHandler__Class**)(modloader::win::memory::resolve_rva(0x04704DF0));
            }
            return cache;
        }
        inline app::IComNativeDescriptorHandler__Class* get_class() {
            return il2cpp::get_class<app::IComNativeDescriptorHandler__Class>(type_info(), "System.ComponentModel", "IComNativeDescriptorHandler");
        }
    } // namespace IComNativeDescriptorHandler
} // namespace app::classes::types
