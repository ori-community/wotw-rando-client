#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PinnedBufferMemoryStream {
        inline app::PinnedBufferMemoryStream__Class** type_info = (app::PinnedBufferMemoryStream__Class**)(modloader::win::memory::resolve_rva(0x0475F920));
        inline app::PinnedBufferMemoryStream__Class* get_class() {
            return il2cpp::get_class<app::PinnedBufferMemoryStream__Class>(type_info, "System.IO", "PinnedBufferMemoryStream");
        }
        inline app::PinnedBufferMemoryStream* create() {
            return il2cpp::create_object<app::PinnedBufferMemoryStream>(get_class());
        }
    } // namespace PinnedBufferMemoryStream
} // namespace app::classes::types
