#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CatAndMouseRoomShadow__Class.h>
#include <Modloader/app/structs/CatAndMouseRoomShadow.h>

namespace app::classes::types {
    namespace CatAndMouseRoomShadow {
        namespace {
            inline app::CatAndMouseRoomShadow__Class* type_info_ref = nullptr;
        }
        inline app::CatAndMouseRoomShadow__Class** type_info = &type_info_ref;
        inline app::CatAndMouseRoomShadow__Class* get_class() {
            return il2cpp::get_class<app::CatAndMouseRoomShadow__Class>(type_info, "", "CatAndMouseRoomShadow");
        }
        inline app::CatAndMouseRoomShadow* create() {
            return il2cpp::create_object<app::CatAndMouseRoomShadow>(get_class());
        }
    } // namespace CatAndMouseRoomShadow
} // namespace app::classes::types
