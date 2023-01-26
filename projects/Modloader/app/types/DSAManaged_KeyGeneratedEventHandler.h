#pragma once
#include <Modloader/app/structs/DSAManaged_KeyGeneratedEventHandler.h>
#include <Modloader/app/structs/DSAManaged_KeyGeneratedEventHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DSAManaged_KeyGeneratedEventHandler {
        inline app::DSAManaged_KeyGeneratedEventHandler__Class** type_info() {
            static app::DSAManaged_KeyGeneratedEventHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DSAManaged_KeyGeneratedEventHandler__Class**)(modloader::win::memory::resolve_rva(0x04707928));
            }
            return cache;
        }
        inline app::DSAManaged_KeyGeneratedEventHandler__Class* get_class() {
            return il2cpp::get_nested_class<app::DSAManaged_KeyGeneratedEventHandler__Class>(type_info(), "Mono.Security.Cryptography", "DSAManaged", "KeyGeneratedEventHandler");
        }
        inline app::DSAManaged_KeyGeneratedEventHandler* create() {
            return il2cpp::create_object<app::DSAManaged_KeyGeneratedEventHandler>(get_class());
        }
    } // namespace DSAManaged_KeyGeneratedEventHandler
} // namespace app::classes::types
