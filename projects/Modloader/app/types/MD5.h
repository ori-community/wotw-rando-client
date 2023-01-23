#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MD5__Class.h>
#include <Modloader/app/structs/MD5.h>

namespace app::classes::types {
    namespace MD5 {
        inline app::MD5__Class** type_info = (app::MD5__Class**)(modloader::win::memory::resolve_rva(0x0477F418));
        inline app::MD5__Class* get_class() {
            return il2cpp::get_class<app::MD5__Class>(type_info, "System.Security.Cryptography", "MD5");
        }
        inline app::MD5* create() {
            return il2cpp::create_object<app::MD5>(get_class());
        }
    } // namespace MD5
} // namespace app::classes::types
