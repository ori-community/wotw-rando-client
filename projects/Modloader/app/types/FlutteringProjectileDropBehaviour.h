#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FlutteringProjectileDropBehaviour__Class.h>
#include <Modloader/app/structs/FlutteringProjectileDropBehaviour.h>

namespace app::classes::types {
    namespace FlutteringProjectileDropBehaviour {
        namespace {
            inline app::FlutteringProjectileDropBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::FlutteringProjectileDropBehaviour__Class** type_info = &type_info_ref;
        inline app::FlutteringProjectileDropBehaviour__Class* get_class() {
            return il2cpp::get_class<app::FlutteringProjectileDropBehaviour__Class>(type_info, "Moon", "FlutteringProjectileDropBehaviour");
        }
        inline app::FlutteringProjectileDropBehaviour* create() {
            return il2cpp::create_object<app::FlutteringProjectileDropBehaviour>(get_class());
        }
    } // namespace FlutteringProjectileDropBehaviour
} // namespace app::classes::types
