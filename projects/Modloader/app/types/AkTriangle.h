#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkTriangle {
        inline app::AkTriangle__Class** type_info = (app::AkTriangle__Class**)(modloader::win::memory::resolve_rva(0x0471F138));
        inline app::AkTriangle__Class* get_class() {
            return il2cpp::get_class<app::AkTriangle__Class>(type_info, "", "AkTriangle");
        }
        inline app::AkTriangle* create() {
            return il2cpp::create_object<app::AkTriangle>(get_class());
        }
    } // namespace AkTriangle
} // namespace app::classes::types
