#pragma once
#include <Modloader/app/structs/TokenizerStringBlock.h>
#include <Modloader/app/structs/TokenizerStringBlock__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TokenizerStringBlock {
        inline app::TokenizerStringBlock__Class** type_info() {
            static app::TokenizerStringBlock__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TokenizerStringBlock__Class**)(modloader::win::memory::resolve_rva(0x0472B038));
            }
            return cache;
        }
        inline app::TokenizerStringBlock__Class* get_class() {
            return il2cpp::get_class<app::TokenizerStringBlock__Class>(type_info(), "System.Security.Util", "TokenizerStringBlock");
        }
        inline app::TokenizerStringBlock* create() {
            return il2cpp::create_object<app::TokenizerStringBlock>(get_class());
        }
    } // namespace TokenizerStringBlock
} // namespace app::classes::types
