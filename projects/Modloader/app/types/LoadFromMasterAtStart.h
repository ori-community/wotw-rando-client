#pragma once
#include <Modloader/app/structs/LoadFromMasterAtStart.h>
#include <Modloader/app/structs/LoadFromMasterAtStart__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LoadFromMasterAtStart {
        inline app::LoadFromMasterAtStart__Class** type_info() {
            static app::LoadFromMasterAtStart__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LoadFromMasterAtStart__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LoadFromMasterAtStart__Class* get_class() {
            return il2cpp::get_class<app::LoadFromMasterAtStart__Class>(type_info(), "", "LoadFromMasterAtStart");
        }
        inline app::LoadFromMasterAtStart* create() {
            return il2cpp::create_object<app::LoadFromMasterAtStart>(get_class());
        }
    } // namespace LoadFromMasterAtStart
} // namespace app::classes::types
