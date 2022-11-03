#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkVector {
        inline app::AkVector__Class** type_info = (app::AkVector__Class**)(modloader::win::memory::resolve_rva(0x0471B758));
        inline app::AkVector__Class* get_class() {
            return il2cpp::get_class<app::AkVector__Class>(type_info, "", "AkVector");
        }
        inline app::AkVector* create() {
            return il2cpp::create_object<app::AkVector>(get_class());
        }
    } // namespace AkVector
} // namespace app::classes::types
