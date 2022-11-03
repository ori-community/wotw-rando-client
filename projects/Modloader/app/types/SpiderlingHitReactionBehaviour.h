#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiderlingHitReactionBehaviour {
        namespace {
            inline app::SpiderlingHitReactionBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SpiderlingHitReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::SpiderlingHitReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderlingHitReactionBehaviour__Class>(type_info, "", "SpiderlingHitReactionBehaviour");
        }
        inline app::SpiderlingHitReactionBehaviour* create() {
            return il2cpp::create_object<app::SpiderlingHitReactionBehaviour>(get_class());
        }
    } // namespace SpiderlingHitReactionBehaviour
} // namespace app::classes::types
