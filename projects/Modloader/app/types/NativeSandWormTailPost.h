#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NativeSandWormTailPost__Class.h>
#include <Modloader/app/structs/NativeSandWormTailPost.h>

namespace app::classes::types {
    namespace NativeSandWormTailPost {
        inline app::NativeSandWormTailPost__Class** type_info = (app::NativeSandWormTailPost__Class**)(modloader::win::memory::resolve_rva(0x047557E0));
        inline app::NativeSandWormTailPost__Class* get_class() {
            return il2cpp::get_class<app::NativeSandWormTailPost__Class>(type_info, "", "NativeSandWormTailPost");
        }
        inline app::NativeSandWormTailPost* create() {
            return il2cpp::create_object<app::NativeSandWormTailPost>(get_class());
        }
    } // namespace NativeSandWormTailPost
} // namespace app::classes::types
