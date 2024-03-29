#pragma once
#include <Modloader/app/structs/PublishedFileId_t.h>
#include <Modloader/app/structs/PublishedFileId_t__Array.h>
#include <Modloader/app/structs/PublishedFileId_t__Boxed.h>
#include <Modloader/app/structs/PublishedFileId_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PublishedFileId_t {
        inline app::PublishedFileId_t__Class** type_info() {
            static app::PublishedFileId_t__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PublishedFileId_t__Class**)(modloader::win::memory::resolve_rva(0x0478C060));
            }
            return cache;
        }
        inline app::PublishedFileId_t__Class* get_class() {
            return il2cpp::get_class<app::PublishedFileId_t__Class>(type_info(), "Steamworks", "PublishedFileId_t");
        }
        inline app::PublishedFileId_t* create() {
            return il2cpp::create_object<app::PublishedFileId_t>(get_class());
        }
        inline app::PublishedFileId_t__Boxed* box(app::PublishedFileId_t value) {
            return il2cpp::box_value<app::PublishedFileId_t__Boxed>(get_class(), value);
        }
        inline app::PublishedFileId_t__Array* create_array(int size) {
            return il2cpp::array_new<app::PublishedFileId_t__Array>(get_class(), size);
        }
        inline app::PublishedFileId_t__Array* create_array(const std::vector<app::PublishedFileId_t>& items) {
            return il2cpp::array_new<app::PublishedFileId_t__Array>(get_class(), items);
        }
    } // namespace PublishedFileId_t
} // namespace app::classes::types
