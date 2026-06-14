#pragma once
#include <Modloader/app/structs/PinnedBufferMemoryStream.h>
#include <Modloader/app/structs/PinnedBufferMemoryStream__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PinnedBufferMemoryStream {
        inline app::PinnedBufferMemoryStream__Class** type_info() {
            static app::PinnedBufferMemoryStream__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PinnedBufferMemoryStream__Class**)(modloader::win::memory::resolve_rva(0x0475F920));
            }
            return cache;
        }
        inline app::PinnedBufferMemoryStream__Class* get_class() {
            return il2cpp::get_class<app::PinnedBufferMemoryStream__Class>(type_info(), "System.IO", "PinnedBufferMemoryStream");
        }
        inline app::PinnedBufferMemoryStream* create() {
            return il2cpp::create_object<app::PinnedBufferMemoryStream>(get_class());
        }
    } // namespace PinnedBufferMemoryStream
} // namespace app::classes::types
