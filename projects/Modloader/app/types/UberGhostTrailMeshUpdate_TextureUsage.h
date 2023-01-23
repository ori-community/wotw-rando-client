#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberGhostTrailMeshUpdate_TextureUsage__Class.h>
#include <Modloader/app/structs/UberGhostTrailMeshUpdate_TextureUsage.h>
#include <Modloader/app/structs/UberGhostTrailMeshUpdate_TextureUsage__Boxed.h>
#include <Modloader/app/structs/UberGhostTrailMeshUpdate_TextureUsage__Array.h>

namespace app::classes::types {
    namespace UberGhostTrailMeshUpdate_TextureUsage {
        inline app::UberGhostTrailMeshUpdate_TextureUsage__Class** type_info = (app::UberGhostTrailMeshUpdate_TextureUsage__Class**)(modloader::win::memory::resolve_rva(0x04798BE0));
        inline app::UberGhostTrailMeshUpdate_TextureUsage__Class* get_class() {
            return il2cpp::get_nested_class<app::UberGhostTrailMeshUpdate_TextureUsage__Class>(type_info, "", "UberGhostTrailMeshUpdate", "TextureUsage");
        }
        inline app::UberGhostTrailMeshUpdate_TextureUsage* create() {
            return il2cpp::create_object<app::UberGhostTrailMeshUpdate_TextureUsage>(get_class());
        }
        inline app::UberGhostTrailMeshUpdate_TextureUsage__Boxed* box(app::UberGhostTrailMeshUpdate_TextureUsage value) {
            return il2cpp::box_value<app::UberGhostTrailMeshUpdate_TextureUsage__Boxed>(get_class(), value);
        }
        inline app::UberGhostTrailMeshUpdate_TextureUsage__Array* create_array(int size) {
            return il2cpp::array_new<app::UberGhostTrailMeshUpdate_TextureUsage__Array>(get_class(), size);
        }
        inline app::UberGhostTrailMeshUpdate_TextureUsage__Array* create_array(const std::vector<app::UberGhostTrailMeshUpdate_TextureUsage>& items) {
            return il2cpp::array_new<app::UberGhostTrailMeshUpdate_TextureUsage__Array>(get_class(), items);
        }
    } // namespace UberGhostTrailMeshUpdate_TextureUsage
} // namespace app::classes::types
