#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TransparentWallB__Class.h>
#include <Modloader/app/structs/TransparentWallB.h>

namespace app::classes::types {
    namespace TransparentWallB {
        namespace {
            inline app::TransparentWallB__Class* type_info_ref = nullptr;
        }
        inline app::TransparentWallB__Class** type_info = &type_info_ref;
        inline app::TransparentWallB__Class* get_class() {
            return il2cpp::get_class<app::TransparentWallB__Class>(type_info, "", "TransparentWallB");
        }
        inline app::TransparentWallB* create() {
            return il2cpp::create_object<app::TransparentWallB>(get_class());
        }
    } // namespace TransparentWallB
} // namespace app::classes::types
