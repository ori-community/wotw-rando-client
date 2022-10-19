#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MinerHitReactionBehaviour_c {
        inline app::MinerHitReactionBehaviour_c__Class** type_info = (app::MinerHitReactionBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x04772088));
        inline app::MinerHitReactionBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MinerHitReactionBehaviour_c__Class>(type_info, "", "MinerHitReactionBehaviour", "<>c");
        }
        inline app::MinerHitReactionBehaviour_c* create() {
            return il2cpp::create_object<app::MinerHitReactionBehaviour_c>(get_class());
        }
    } // namespace MinerHitReactionBehaviour_c
} // namespace app::classes::types
