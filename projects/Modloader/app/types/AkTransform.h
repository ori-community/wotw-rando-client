#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkTransform {
        inline app::AkTransform__Class** type_info = (app::AkTransform__Class**)(modloader::win::memory::resolve_rva(0x047077A0));
        inline app::AkTransform__Class* get_class() {
            return il2cpp::get_class<app::AkTransform__Class>(type_info, "", "AkTransform");
        }
        inline app::AkTransform* create() {
            return il2cpp::create_object<app::AkTransform>(get_class());
        }
    } // namespace AkTransform
} // namespace app::classes::types
