#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SandWormEntity_Segment__Array__Class.h>
#include <Modloader/app/structs/SandWormEntity_Segment__Array.h>

namespace app::classes::types {
    namespace SandWormEntity_Segment__Array {
        namespace {
            inline app::SandWormEntity_Segment__Array__Class* type_info_ref = nullptr;
        }
        inline app::SandWormEntity_Segment__Array__Class** type_info = &type_info_ref;
        inline app::SandWormEntity_Segment__Array__Class* get_class() {
            return il2cpp::get_class<app::SandWormEntity_Segment__Array__Class>(type_info, "", "SandWormEntity+Segment[]");
        }
        inline app::SandWormEntity_Segment__Array* create() {
            return il2cpp::create_object<app::SandWormEntity_Segment__Array>(get_class());
        }
    } // namespace SandWormEntity_Segment__Array
} // namespace app::classes::types
