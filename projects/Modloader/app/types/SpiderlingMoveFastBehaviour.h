#pragma once
#include <Modloader/app/structs/SpiderlingMoveFastBehaviour.h>
#include <Modloader/app/structs/SpiderlingMoveFastBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderlingMoveFastBehaviour {
        inline app::SpiderlingMoveFastBehaviour__Class** type_info() {
            static app::SpiderlingMoveFastBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderlingMoveFastBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderlingMoveFastBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderlingMoveFastBehaviour__Class>(type_info(), "Moon", "SpiderlingMoveFastBehaviour");
        }
        inline app::SpiderlingMoveFastBehaviour* create() {
            return il2cpp::create_object<app::SpiderlingMoveFastBehaviour>(get_class());
        }
    } // namespace SpiderlingMoveFastBehaviour
} // namespace app::classes::types
