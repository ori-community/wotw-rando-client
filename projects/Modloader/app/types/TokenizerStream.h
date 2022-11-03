#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TokenizerStream {
        inline app::TokenizerStream__Class** type_info = (app::TokenizerStream__Class**)(modloader::win::memory::resolve_rva(0x0476F168));
        inline app::TokenizerStream__Class* get_class() {
            return il2cpp::get_class<app::TokenizerStream__Class>(type_info, "System.Security.Util", "TokenizerStream");
        }
        inline app::TokenizerStream* create() {
            return il2cpp::create_object<app::TokenizerStream>(get_class());
        }
    } // namespace TokenizerStream
} // namespace app::classes::types
