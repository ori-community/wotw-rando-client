#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MinerHitReactionBehaviour {
        namespace {
            app::MinerHitReactionBehaviour__Class* type_info_ref = nullptr;
        }
        app::MinerHitReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::MinerHitReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MinerHitReactionBehaviour__Class>(type_info, "", "MinerHitReactionBehaviour");
        }
        inline app::MinerHitReactionBehaviour* create() {
            return il2cpp::create_object<app::MinerHitReactionBehaviour>(get_class());
        }
    } // namespace MinerHitReactionBehaviour
} // namespace app::classes::types
