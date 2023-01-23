#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AkImageSourceParams__Class.h>
#include <Modloader/app/structs/AkImageSourceParams.h>

namespace app::classes::types {
    namespace AkImageSourceParams {
        inline app::AkImageSourceParams__Class** type_info = (app::AkImageSourceParams__Class**)(modloader::win::memory::resolve_rva(0x0472AF80));
        inline app::AkImageSourceParams__Class* get_class() {
            return il2cpp::get_class<app::AkImageSourceParams__Class>(type_info, "", "AkImageSourceParams");
        }
        inline app::AkImageSourceParams* create() {
            return il2cpp::create_object<app::AkImageSourceParams>(get_class());
        }
    } // namespace AkImageSourceParams
} // namespace app::classes::types
