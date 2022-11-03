#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Base64Stream_ReadStateInfo {
        inline app::Base64Stream_ReadStateInfo__Class** type_info = (app::Base64Stream_ReadStateInfo__Class**)(modloader::win::memory::resolve_rva(0x047431D8));
        inline app::Base64Stream_ReadStateInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::Base64Stream_ReadStateInfo__Class>(type_info, "System.Net", "Base64Stream", "ReadStateInfo");
        }
        inline app::Base64Stream_ReadStateInfo* create() {
            return il2cpp::create_object<app::Base64Stream_ReadStateInfo>(get_class());
        }
    } // namespace Base64Stream_ReadStateInfo
} // namespace app::classes::types
