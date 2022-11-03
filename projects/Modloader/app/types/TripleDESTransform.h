#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TripleDESTransform {
        inline app::TripleDESTransform__Class** type_info = (app::TripleDESTransform__Class**)(modloader::win::memory::resolve_rva(0x047969E8));
        inline app::TripleDESTransform__Class* get_class() {
            return il2cpp::get_class<app::TripleDESTransform__Class>(type_info, "System.Security.Cryptography", "TripleDESTransform");
        }
        inline app::TripleDESTransform* create() {
            return il2cpp::create_object<app::TripleDESTransform>(get_class());
        }
    } // namespace TripleDESTransform
} // namespace app::classes::types
