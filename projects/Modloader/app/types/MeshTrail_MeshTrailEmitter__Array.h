#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MeshTrail_MeshTrailEmitter__Array__Class.h>
#include <Modloader/app/structs/MeshTrail_MeshTrailEmitter__Array.h>

namespace app::classes::types {
    namespace MeshTrail_MeshTrailEmitter__Array {
        namespace {
            inline app::MeshTrail_MeshTrailEmitter__Array__Class* type_info_ref = nullptr;
        }
        inline app::MeshTrail_MeshTrailEmitter__Array__Class** type_info = &type_info_ref;
        inline app::MeshTrail_MeshTrailEmitter__Array__Class* get_class() {
            return il2cpp::get_class<app::MeshTrail_MeshTrailEmitter__Array__Class>(type_info, "", "MeshTrail+MeshTrailEmitter[]");
        }
        inline app::MeshTrail_MeshTrailEmitter__Array* create() {
            return il2cpp::create_object<app::MeshTrail_MeshTrailEmitter__Array>(get_class());
        }
    } // namespace MeshTrail_MeshTrailEmitter__Array
} // namespace app::classes::types
