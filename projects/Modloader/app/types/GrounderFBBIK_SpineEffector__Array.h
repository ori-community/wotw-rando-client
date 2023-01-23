#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GrounderFBBIK_SpineEffector__Array__Class.h>
#include <Modloader/app/structs/GrounderFBBIK_SpineEffector__Array.h>

namespace app::classes::types {
    namespace GrounderFBBIK_SpineEffector__Array {
        inline app::GrounderFBBIK_SpineEffector__Array__Class** type_info = (app::GrounderFBBIK_SpineEffector__Array__Class**)(modloader::win::memory::resolve_rva(0x04773B20));
        inline app::GrounderFBBIK_SpineEffector__Array__Class* get_class() {
            return il2cpp::get_class<app::GrounderFBBIK_SpineEffector__Array__Class>(type_info, "RootMotion.FinalIK", "GrounderFBBIK+SpineEffector[]");
        }
        inline app::GrounderFBBIK_SpineEffector__Array* create() {
            return il2cpp::create_object<app::GrounderFBBIK_SpineEffector__Array>(get_class());
        }
    } // namespace GrounderFBBIK_SpineEffector__Array
} // namespace app::classes::types
