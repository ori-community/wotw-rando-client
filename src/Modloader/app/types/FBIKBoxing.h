#pragma once
#include <Modloader/app/structs/FBIKBoxing.h>
#include <Modloader/app/structs/FBIKBoxing__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FBIKBoxing {
        inline app::FBIKBoxing__Class** type_info() {
            static app::FBIKBoxing__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FBIKBoxing__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FBIKBoxing__Class* get_class() {
            return il2cpp::get_class<app::FBIKBoxing__Class>(type_info(), "RootMotion.Demos", "FBIKBoxing");
        }
        inline app::FBIKBoxing* create() {
            return il2cpp::create_object<app::FBIKBoxing>(get_class());
        }
    } // namespace FBIKBoxing
} // namespace app::classes::types
