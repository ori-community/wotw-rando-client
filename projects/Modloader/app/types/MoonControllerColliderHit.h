#pragma once
#include <Modloader/app/structs/MoonControllerColliderHit.h>
#include <Modloader/app/structs/MoonControllerColliderHit__Boxed.h>
#include <Modloader/app/structs/MoonControllerColliderHit__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonControllerColliderHit {
        inline app::MoonControllerColliderHit__Class** type_info() {
            static app::MoonControllerColliderHit__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonControllerColliderHit__Class**)(modloader::win::memory::resolve_rva(0x04797E48));
            }
            return cache;
        }
        inline app::MoonControllerColliderHit__Class* get_class() {
            return il2cpp::get_class<app::MoonControllerColliderHit__Class>(type_info(), "", "MoonControllerColliderHit");
        }
        inline app::MoonControllerColliderHit* create() {
            return il2cpp::create_object<app::MoonControllerColliderHit>(get_class());
        }
        inline app::MoonControllerColliderHit__Boxed* box(app::MoonControllerColliderHit value) {
            return il2cpp::box_value<app::MoonControllerColliderHit__Boxed>(get_class(), value);
        }
    } // namespace MoonControllerColliderHit
} // namespace app::classes::types
