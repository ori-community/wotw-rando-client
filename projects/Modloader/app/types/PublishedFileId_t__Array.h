#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PublishedFileId_t__Array {
        inline app::PublishedFileId_t__Array__Class** type_info = (app::PublishedFileId_t__Array__Class**)(modloader::win::memory::resolve_rva(0x04764128));
        inline app::PublishedFileId_t__Array__Class* get_class() {
            return il2cpp::get_class<app::PublishedFileId_t__Array__Class>(type_info, "Steamworks", "PublishedFileId_t[]");
        }
        inline app::PublishedFileId_t__Array* create() {
            return il2cpp::create_object<app::PublishedFileId_t__Array>(get_class());
        }
    } // namespace PublishedFileId_t__Array
} // namespace app::classes::types
