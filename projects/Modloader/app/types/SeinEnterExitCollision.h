#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinEnterExitCollision__Class.h>
#include <Modloader/app/structs/SeinEnterExitCollision.h>

namespace app::classes::types {
    namespace SeinEnterExitCollision {
        namespace {
            inline app::SeinEnterExitCollision__Class* type_info_ref = nullptr;
        }
        inline app::SeinEnterExitCollision__Class** type_info = &type_info_ref;
        inline app::SeinEnterExitCollision__Class* get_class() {
            return il2cpp::get_class<app::SeinEnterExitCollision__Class>(type_info, "", "SeinEnterExitCollision");
        }
        inline app::SeinEnterExitCollision* create() {
            return il2cpp::create_object<app::SeinEnterExitCollision>(get_class());
        }
    } // namespace SeinEnterExitCollision
} // namespace app::classes::types
