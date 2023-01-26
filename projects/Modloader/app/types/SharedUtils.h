#pragma once
#include <Modloader/app/structs/SharedUtils.h>
#include <Modloader/app/structs/SharedUtils__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SharedUtils {
        inline app::SharedUtils__Class** type_info() {
            static app::SharedUtils__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SharedUtils__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SharedUtils__Class* get_class() {
            return il2cpp::get_class<app::SharedUtils__Class>(type_info(), "Ionic.Zlib", "SharedUtils");
        }
        inline app::SharedUtils* create() {
            return il2cpp::create_object<app::SharedUtils>(get_class());
        }
    } // namespace SharedUtils
} // namespace app::classes::types
