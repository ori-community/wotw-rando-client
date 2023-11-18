#pragma once
#include <Modloader/app/structs/MinerBuilderIdleBehaviour.h>
#include <Modloader/app/structs/MinerBuilderIdleBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MinerBuilderIdleBehaviour {
        inline app::MinerBuilderIdleBehaviour__Class** type_info() {
            static app::MinerBuilderIdleBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MinerBuilderIdleBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MinerBuilderIdleBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MinerBuilderIdleBehaviour__Class>(type_info(), "", "MinerBuilderIdleBehaviour");
        }
        inline app::MinerBuilderIdleBehaviour* create() {
            return il2cpp::create_object<app::MinerBuilderIdleBehaviour>(get_class());
        }
    } // namespace MinerBuilderIdleBehaviour
} // namespace app::classes::types
