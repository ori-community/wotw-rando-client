#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SandWormTailPost__Array {
        inline app::SandWormTailPost__Array__Class** type_info = (app::SandWormTailPost__Array__Class**)(modloader::win::memory::resolve_rva(0x04763810));
        inline app::SandWormTailPost__Array__Class* get_class() {
            return il2cpp::get_class<app::SandWormTailPost__Array__Class>(type_info, "", "SandWormTailPost[]");
        }
        inline app::SandWormTailPost__Array* create() {
            return il2cpp::create_object<app::SandWormTailPost__Array>(get_class());
        }
    } // namespace SandWormTailPost__Array
} // namespace app::classes::types
