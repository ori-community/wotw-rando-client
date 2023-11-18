#pragma once
#include <Modloader/app/structs/AkRoomParams.h>
#include <Modloader/app/structs/AkRoomParams__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkRoomParams {
        inline app::AkRoomParams__Class** type_info() {
            static app::AkRoomParams__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkRoomParams__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkRoomParams__Class* get_class() {
            return il2cpp::get_class<app::AkRoomParams__Class>(type_info(), "", "AkRoomParams");
        }
        inline app::AkRoomParams* create() {
            return il2cpp::create_object<app::AkRoomParams>(get_class());
        }
    } // namespace AkRoomParams
} // namespace app::classes::types
