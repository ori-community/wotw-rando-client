#pragma once
#include <Modloader/app/structs/PublishedFileId_t__Array.h>
#include <Modloader/app/structs/PublishedFileId_t__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PublishedFileId_t__Array {
        inline app::PublishedFileId_t__Array__Class** type_info() {
            static app::PublishedFileId_t__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PublishedFileId_t__Array__Class**)(modloader::win::memory::resolve_rva(0x04764128));
            }
            return cache;
        }
        inline app::PublishedFileId_t__Array__Class* get_class() {
            return il2cpp::get_class<app::PublishedFileId_t__Array__Class>(type_info(), "Steamworks", "PublishedFileId_t[]");
        }
        inline app::PublishedFileId_t__Array* create() {
            return il2cpp::create_object<app::PublishedFileId_t__Array>(get_class());
        }
    } // namespace PublishedFileId_t__Array
} // namespace app::classes::types
