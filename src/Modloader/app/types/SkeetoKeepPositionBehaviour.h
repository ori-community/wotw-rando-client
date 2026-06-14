#pragma once
#include <Modloader/app/structs/SkeetoKeepPositionBehaviour.h>
#include <Modloader/app/structs/SkeetoKeepPositionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkeetoKeepPositionBehaviour {
        inline app::SkeetoKeepPositionBehaviour__Class** type_info() {
            static app::SkeetoKeepPositionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SkeetoKeepPositionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SkeetoKeepPositionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SkeetoKeepPositionBehaviour__Class>(type_info(), "", "SkeetoKeepPositionBehaviour");
        }
        inline app::SkeetoKeepPositionBehaviour* create() {
            return il2cpp::create_object<app::SkeetoKeepPositionBehaviour>(get_class());
        }
    } // namespace SkeetoKeepPositionBehaviour
} // namespace app::classes::types
