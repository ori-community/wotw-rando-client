#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TokenizerStringBlock__Class.h>
#include <Modloader/app/structs/TokenizerStringBlock.h>

namespace app::classes::types {
    namespace TokenizerStringBlock {
        inline app::TokenizerStringBlock__Class** type_info = (app::TokenizerStringBlock__Class**)(modloader::win::memory::resolve_rva(0x0472B038));
        inline app::TokenizerStringBlock__Class* get_class() {
            return il2cpp::get_class<app::TokenizerStringBlock__Class>(type_info, "System.Security.Util", "TokenizerStringBlock");
        }
        inline app::TokenizerStringBlock* create() {
            return il2cpp::create_object<app::TokenizerStringBlock>(get_class());
        }
    } // namespace TokenizerStringBlock
} // namespace app::classes::types
