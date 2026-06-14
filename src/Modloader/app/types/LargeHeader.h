#pragma once
#include <Modloader/app/structs/LargeHeader.h>
#include <Modloader/app/structs/LargeHeader__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LargeHeader {
        inline app::LargeHeader__Class** type_info() {
            static app::LargeHeader__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LargeHeader__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LargeHeader__Class* get_class() {
            return il2cpp::get_class<app::LargeHeader__Class>(type_info(), "RootMotion", "LargeHeader");
        }
        inline app::LargeHeader* create() {
            return il2cpp::create_object<app::LargeHeader>(get_class());
        }
    } // namespace LargeHeader
} // namespace app::classes::types
