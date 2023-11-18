#pragma once
#include <Modloader/app/structs/MinerChaseBehaviour.h>
#include <Modloader/app/structs/MinerChaseBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MinerChaseBehaviour {
        inline app::MinerChaseBehaviour__Class** type_info() {
            static app::MinerChaseBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MinerChaseBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MinerChaseBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MinerChaseBehaviour__Class>(type_info(), "", "MinerChaseBehaviour");
        }
        inline app::MinerChaseBehaviour* create() {
            return il2cpp::create_object<app::MinerChaseBehaviour>(get_class());
        }
    } // namespace MinerChaseBehaviour
} // namespace app::classes::types
