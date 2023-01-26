#pragma once
#include <Modloader/app/structs/GrounderFBBIK_SpineEffector__Array.h>
#include <Modloader/app/structs/GrounderFBBIK_SpineEffector__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GrounderFBBIK_SpineEffector__Array {
        inline app::GrounderFBBIK_SpineEffector__Array__Class** type_info() {
            static app::GrounderFBBIK_SpineEffector__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GrounderFBBIK_SpineEffector__Array__Class**)(modloader::win::memory::resolve_rva(0x04773B20));
            }
            return cache;
        }
        inline app::GrounderFBBIK_SpineEffector__Array__Class* get_class() {
            return il2cpp::get_class<app::GrounderFBBIK_SpineEffector__Array__Class>(type_info(), "RootMotion.FinalIK", "GrounderFBBIK+SpineEffector[]");
        }
        inline app::GrounderFBBIK_SpineEffector__Array* create() {
            return il2cpp::create_object<app::GrounderFBBIK_SpineEffector__Array>(get_class());
        }
    } // namespace GrounderFBBIK_SpineEffector__Array
} // namespace app::classes::types
