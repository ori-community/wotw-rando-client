#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FlutteringProjectileDropBehaviour_c {
        inline app::FlutteringProjectileDropBehaviour_c__Class** type_info = (app::FlutteringProjectileDropBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x0472DB10));
        inline app::FlutteringProjectileDropBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::FlutteringProjectileDropBehaviour_c__Class>(type_info, "Moon", "FlutteringProjectileDropBehaviour", "<>c");
        }
        inline app::FlutteringProjectileDropBehaviour_c* create() {
            return il2cpp::create_object<app::FlutteringProjectileDropBehaviour_c>(get_class());
        }
    } // namespace FlutteringProjectileDropBehaviour_c
} // namespace app::classes::types
