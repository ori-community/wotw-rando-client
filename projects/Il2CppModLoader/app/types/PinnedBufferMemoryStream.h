#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PinnedBufferMemoryStream {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PinnedBufferMemoryStream__Class** type_info;
        inline app::PinnedBufferMemoryStream__Class* get_class() {
            return il2cpp::get_class<app::PinnedBufferMemoryStream__Class>(type_info, "System.IO", "PinnedBufferMemoryStream");
        }
        inline app::PinnedBufferMemoryStream* create() {
            return il2cpp::create_object<app::PinnedBufferMemoryStream>(get_class());
        }
    } // namespace PinnedBufferMemoryStream
} // namespace app::classes::types
