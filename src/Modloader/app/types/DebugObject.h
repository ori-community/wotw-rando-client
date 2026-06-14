#pragma once
#include <Modloader/app/structs/DebugObject.h>
#include <Modloader/app/structs/DebugObject__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DebugObject {
        inline app::DebugObject__Class** type_info() {
            static app::DebugObject__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DebugObject__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DebugObject__Class* get_class() {
            return il2cpp::get_class<app::DebugObject__Class>(type_info(), "", "DebugObject");
        }
        inline app::DebugObject* create() {
            return il2cpp::create_object<app::DebugObject>(get_class());
        }
    } // namespace DebugObject
} // namespace app::classes::types
