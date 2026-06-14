#pragma once
#include <Modloader/app/structs/RSASignaturePadding.h>
#include <Modloader/app/structs/RSASignaturePadding__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RSASignaturePadding {
        inline app::RSASignaturePadding__Class** type_info() {
            static app::RSASignaturePadding__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RSASignaturePadding__Class**)(modloader::win::memory::resolve_rva(0x04765E40));
            }
            return cache;
        }
        inline app::RSASignaturePadding__Class* get_class() {
            return il2cpp::get_class<app::RSASignaturePadding__Class>(type_info(), "System.Security.Cryptography", "RSASignaturePadding");
        }
        inline app::RSASignaturePadding* create() {
            return il2cpp::create_object<app::RSASignaturePadding>(get_class());
        }
    } // namespace RSASignaturePadding
} // namespace app::classes::types
