#pragma once
#include <Modloader/app/structs/RSASignaturePaddingMode__Enum.h>
#include <Modloader/app/structs/RSASignaturePaddingMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RSASignaturePaddingMode__Enum {
        inline app::RSASignaturePaddingMode__Enum__Class** type_info() {
            static app::RSASignaturePaddingMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RSASignaturePaddingMode__Enum__Class**)(modloader::win::memory::resolve_rva(0x04757D60));
            }
            return cache;
        }
        inline app::RSASignaturePaddingMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::RSASignaturePaddingMode__Enum__Class>(type_info(), "System.Security.Cryptography", "RSASignaturePaddingMode");
        }
        inline app::RSASignaturePaddingMode__Enum* create() {
            return il2cpp::create_object<app::RSASignaturePaddingMode__Enum>(get_class());
        }
    } // namespace RSASignaturePaddingMode__Enum
} // namespace app::classes::types
