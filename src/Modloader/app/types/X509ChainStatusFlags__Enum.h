#pragma once
#include <Modloader/app/structs/X509ChainStatusFlags__Enum.h>
#include <Modloader/app/structs/X509ChainStatusFlags__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace X509ChainStatusFlags__Enum {
        inline app::X509ChainStatusFlags__Enum__Class** type_info() {
            static app::X509ChainStatusFlags__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::X509ChainStatusFlags__Enum__Class**)(modloader::win::memory::resolve_rva(0x04734D88));
            }
            return cache;
        }
        inline app::X509ChainStatusFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::X509ChainStatusFlags__Enum__Class>(type_info(), "System.Security.Cryptography.X509Certificates", "X509ChainStatusFlags");
        }
        inline app::X509ChainStatusFlags__Enum* create() {
            return il2cpp::create_object<app::X509ChainStatusFlags__Enum>(get_class());
        }
    } // namespace X509ChainStatusFlags__Enum
} // namespace app::classes::types
