#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Rijndael__Class.h>
#include <Modloader/app/structs/Rijndael.h>

namespace app::classes::types {
    namespace Rijndael {
        inline app::Rijndael__Class** type_info = (app::Rijndael__Class**)(modloader::win::memory::resolve_rva(0x0476B6B0));
        inline app::Rijndael__Class* get_class() {
            return il2cpp::get_class<app::Rijndael__Class>(type_info, "System.Security.Cryptography", "Rijndael");
        }
        inline app::Rijndael* create() {
            return il2cpp::create_object<app::Rijndael>(get_class());
        }
    } // namespace Rijndael
} // namespace app::classes::types
