#pragma once
#include <Modloader/app/structs/Base64WriteStateInfo.h>
#include <Modloader/app/structs/Base64WriteStateInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Base64WriteStateInfo {
        inline app::Base64WriteStateInfo__Class** type_info() {
            static app::Base64WriteStateInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Base64WriteStateInfo__Class**)(modloader::win::memory::resolve_rva(0x0477AD58));
            }
            return cache;
        }
        inline app::Base64WriteStateInfo__Class* get_class() {
            return il2cpp::get_class<app::Base64WriteStateInfo__Class>(type_info(), "System.Net.Mime", "Base64WriteStateInfo");
        }
        inline app::Base64WriteStateInfo* create() {
            return il2cpp::create_object<app::Base64WriteStateInfo>(get_class());
        }
    } // namespace Base64WriteStateInfo
} // namespace app::classes::types
