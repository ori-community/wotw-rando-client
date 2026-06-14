#pragma once
#include <Modloader/app/structs/SkeetoRunAwayBehaviour.h>
#include <Modloader/app/structs/SkeetoRunAwayBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkeetoRunAwayBehaviour {
        inline app::SkeetoRunAwayBehaviour__Class** type_info() {
            static app::SkeetoRunAwayBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SkeetoRunAwayBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SkeetoRunAwayBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SkeetoRunAwayBehaviour__Class>(type_info(), "", "SkeetoRunAwayBehaviour");
        }
        inline app::SkeetoRunAwayBehaviour* create() {
            return il2cpp::create_object<app::SkeetoRunAwayBehaviour>(get_class());
        }
    } // namespace SkeetoRunAwayBehaviour
} // namespace app::classes::types
