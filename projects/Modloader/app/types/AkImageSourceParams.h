#pragma once
#include <Modloader/app/structs/AkImageSourceParams.h>
#include <Modloader/app/structs/AkImageSourceParams__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkImageSourceParams {
        inline app::AkImageSourceParams__Class** type_info() {
            static app::AkImageSourceParams__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkImageSourceParams__Class**)(modloader::win::memory::resolve_rva(0x0472AF80));
            }
            return cache;
        }
        inline app::AkImageSourceParams__Class* get_class() {
            return il2cpp::get_class<app::AkImageSourceParams__Class>(type_info(), "", "AkImageSourceParams");
        }
        inline app::AkImageSourceParams* create() {
            return il2cpp::create_object<app::AkImageSourceParams>(get_class());
        }
    } // namespace AkImageSourceParams
} // namespace app::classes::types
