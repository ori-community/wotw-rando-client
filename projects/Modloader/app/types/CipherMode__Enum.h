#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CipherMode__Enum__Class.h>
#include <Modloader/app/structs/CipherMode__Enum.h>

namespace app::classes::types {
    namespace CipherMode__Enum {
        inline app::CipherMode__Enum__Class** type_info = (app::CipherMode__Enum__Class**)(modloader::win::memory::resolve_rva(0x04771898));
        inline app::CipherMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::CipherMode__Enum__Class>(type_info, "System.Security.Cryptography", "CipherMode");
        }
        inline app::CipherMode__Enum* create() {
            return il2cpp::create_object<app::CipherMode__Enum>(get_class());
        }
    } // namespace CipherMode__Enum
} // namespace app::classes::types
