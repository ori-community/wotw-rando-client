#pragma once
#include <Modloader/app/structs/PointerUIBase.h>
#include <Modloader/app/structs/PointerUIBase__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PointerUIBase {
        inline app::PointerUIBase__Class** type_info() {
            static app::PointerUIBase__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PointerUIBase__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PointerUIBase__Class* get_class() {
            return il2cpp::get_class<app::PointerUIBase__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "PointerUIBase");
        }
        inline app::PointerUIBase* create() {
            return il2cpp::create_object<app::PointerUIBase>(get_class());
        }
    } // namespace PointerUIBase
} // namespace app::classes::types
