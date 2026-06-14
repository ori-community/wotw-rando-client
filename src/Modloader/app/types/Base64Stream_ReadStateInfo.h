#pragma once
#include <Modloader/app/structs/Base64Stream_ReadStateInfo.h>
#include <Modloader/app/structs/Base64Stream_ReadStateInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Base64Stream_ReadStateInfo {
        inline app::Base64Stream_ReadStateInfo__Class** type_info() {
            static app::Base64Stream_ReadStateInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Base64Stream_ReadStateInfo__Class**)(modloader::win::memory::resolve_rva(0x047431D8));
            }
            return cache;
        }
        inline app::Base64Stream_ReadStateInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::Base64Stream_ReadStateInfo__Class>(type_info(), "System.Net", "Base64Stream", "ReadStateInfo");
        }
        inline app::Base64Stream_ReadStateInfo* create() {
            return il2cpp::create_object<app::Base64Stream_ReadStateInfo>(get_class());
        }
    } // namespace Base64Stream_ReadStateInfo
} // namespace app::classes::types
