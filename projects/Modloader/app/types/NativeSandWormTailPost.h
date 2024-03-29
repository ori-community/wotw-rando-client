#pragma once
#include <Modloader/app/structs/NativeSandWormTailPost.h>
#include <Modloader/app/structs/NativeSandWormTailPost__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NativeSandWormTailPost {
        inline app::NativeSandWormTailPost__Class** type_info() {
            static app::NativeSandWormTailPost__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NativeSandWormTailPost__Class**)(modloader::win::memory::resolve_rva(0x047557E0));
            }
            return cache;
        }
        inline app::NativeSandWormTailPost__Class* get_class() {
            return il2cpp::get_class<app::NativeSandWormTailPost__Class>(type_info(), "", "NativeSandWormTailPost");
        }
        inline app::NativeSandWormTailPost* create() {
            return il2cpp::create_object<app::NativeSandWormTailPost>(get_class());
        }
    } // namespace NativeSandWormTailPost
} // namespace app::classes::types
