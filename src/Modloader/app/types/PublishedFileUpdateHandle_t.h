#pragma once
#include <Modloader/app/structs/PublishedFileUpdateHandle_t.h>
#include <Modloader/app/structs/PublishedFileUpdateHandle_t__Boxed.h>
#include <Modloader/app/structs/PublishedFileUpdateHandle_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PublishedFileUpdateHandle_t {
        inline app::PublishedFileUpdateHandle_t__Class** type_info() {
            static app::PublishedFileUpdateHandle_t__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PublishedFileUpdateHandle_t__Class**)(modloader::win::memory::resolve_rva(0x0474B068));
            }
            return cache;
        }
        inline app::PublishedFileUpdateHandle_t__Class* get_class() {
            return il2cpp::get_class<app::PublishedFileUpdateHandle_t__Class>(type_info(), "Steamworks", "PublishedFileUpdateHandle_t");
        }
        inline app::PublishedFileUpdateHandle_t* create() {
            return il2cpp::create_object<app::PublishedFileUpdateHandle_t>(get_class());
        }
        inline app::PublishedFileUpdateHandle_t__Boxed* box(app::PublishedFileUpdateHandle_t value) {
            return il2cpp::box_value<app::PublishedFileUpdateHandle_t__Boxed>(get_class(), value);
        }
    } // namespace PublishedFileUpdateHandle_t
} // namespace app::classes::types
