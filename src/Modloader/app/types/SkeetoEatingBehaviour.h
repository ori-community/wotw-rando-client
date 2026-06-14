#pragma once
#include <Modloader/app/structs/SkeetoEatingBehaviour.h>
#include <Modloader/app/structs/SkeetoEatingBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkeetoEatingBehaviour {
        inline app::SkeetoEatingBehaviour__Class** type_info() {
            static app::SkeetoEatingBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SkeetoEatingBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SkeetoEatingBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SkeetoEatingBehaviour__Class>(type_info(), "", "SkeetoEatingBehaviour");
        }
        inline app::SkeetoEatingBehaviour* create() {
            return il2cpp::create_object<app::SkeetoEatingBehaviour>(get_class());
        }
    } // namespace SkeetoEatingBehaviour
} // namespace app::classes::types
