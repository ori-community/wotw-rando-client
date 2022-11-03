#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RSASignaturePaddingMode__Enum {
        inline app::RSASignaturePaddingMode__Enum__Class** type_info = (app::RSASignaturePaddingMode__Enum__Class**)(modloader::win::memory::resolve_rva(0x04757D60));
        inline app::RSASignaturePaddingMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::RSASignaturePaddingMode__Enum__Class>(type_info, "System.Security.Cryptography", "RSASignaturePaddingMode");
        }
        inline app::RSASignaturePaddingMode__Enum* create() {
            return il2cpp::create_object<app::RSASignaturePaddingMode__Enum>(get_class());
        }
    } // namespace RSASignaturePaddingMode__Enum
} // namespace app::classes::types
