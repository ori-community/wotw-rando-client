#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LianaVinePhysics__Class.h>
#include <Modloader/app/structs/LianaVinePhysics.h>

namespace app::classes::types {
    namespace LianaVinePhysics {
        namespace {
            inline app::LianaVinePhysics__Class* type_info_ref = nullptr;
        }
        inline app::LianaVinePhysics__Class** type_info = &type_info_ref;
        inline app::LianaVinePhysics__Class* get_class() {
            return il2cpp::get_class<app::LianaVinePhysics__Class>(type_info, "", "LianaVinePhysics");
        }
        inline app::LianaVinePhysics* create() {
            return il2cpp::create_object<app::LianaVinePhysics>(get_class());
        }
    } // namespace LianaVinePhysics
} // namespace app::classes::types
