#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AkRoomParams__Class.h>
#include <Modloader/app/structs/AkRoomParams.h>

namespace app::classes::types {
    namespace AkRoomParams {
        namespace {
            inline app::AkRoomParams__Class* type_info_ref = nullptr;
        }
        inline app::AkRoomParams__Class** type_info = &type_info_ref;
        inline app::AkRoomParams__Class* get_class() {
            return il2cpp::get_class<app::AkRoomParams__Class>(type_info, "", "AkRoomParams");
        }
        inline app::AkRoomParams* create() {
            return il2cpp::create_object<app::AkRoomParams>(get_class());
        }
    } // namespace AkRoomParams
} // namespace app::classes::types
