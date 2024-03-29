#pragma once
#include <Modloader/app/structs/ContextBoundObject.h>
#include <Modloader/app/structs/ContextBoundObject__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ContextBoundObject {
        inline app::ContextBoundObject__Class** type_info() {
            static app::ContextBoundObject__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ContextBoundObject__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ContextBoundObject__Class* get_class() {
            return il2cpp::get_class<app::ContextBoundObject__Class>(type_info(), "System", "ContextBoundObject");
        }
        inline app::ContextBoundObject* create() {
            return il2cpp::create_object<app::ContextBoundObject>(get_class());
        }
    } // namespace ContextBoundObject
} // namespace app::classes::types
