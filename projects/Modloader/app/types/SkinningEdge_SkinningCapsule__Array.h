#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SkinningEdge_SkinningCapsule__Array__Class.h>
#include <Modloader/app/structs/SkinningEdge_SkinningCapsule__Array.h>

namespace app::classes::types {
    namespace SkinningEdge_SkinningCapsule__Array {
        namespace {
            inline app::SkinningEdge_SkinningCapsule__Array__Class* type_info_ref = nullptr;
        }
        inline app::SkinningEdge_SkinningCapsule__Array__Class** type_info = &type_info_ref;
        inline app::SkinningEdge_SkinningCapsule__Array__Class* get_class() {
            return il2cpp::get_class<app::SkinningEdge_SkinningCapsule__Array__Class>(type_info, "", "SkinningEdge+SkinningCapsule[]");
        }
        inline app::SkinningEdge_SkinningCapsule__Array* create() {
            return il2cpp::create_object<app::SkinningEdge_SkinningCapsule__Array>(get_class());
        }
    } // namespace SkinningEdge_SkinningCapsule__Array
} // namespace app::classes::types
