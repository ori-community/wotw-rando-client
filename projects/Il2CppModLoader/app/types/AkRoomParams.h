#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkRoomParams {
        namespace {
            app::AkRoomParams__Class* type_info_ref = nullptr;
        }
        app::AkRoomParams__Class** type_info = &type_info_ref;
        inline app::AkRoomParams__Class* get_class() {
            return il2cpp::get_class<app::AkRoomParams__Class>(type_info, "", "AkRoomParams");
        }
        inline app::AkRoomParams* create() {
            return il2cpp::create_object<app::AkRoomParams>(get_class());
        }
    } // namespace AkRoomParams
} // namespace app::classes::types
