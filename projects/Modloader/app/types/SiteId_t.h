#pragma once
#include <Modloader/app/structs/SiteId_t.h>
#include <Modloader/app/structs/SiteId_t__Boxed.h>
#include <Modloader/app/structs/SiteId_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SiteId_t {
        inline app::SiteId_t__Class** type_info() {
            static app::SiteId_t__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SiteId_t__Class**)(modloader::win::memory::resolve_rva(0x04761078));
            }
            return cache;
        }
        inline app::SiteId_t__Class* get_class() {
            return il2cpp::get_class<app::SiteId_t__Class>(type_info(), "Steamworks", "SiteId_t");
        }
        inline app::SiteId_t* create() {
            return il2cpp::create_object<app::SiteId_t>(get_class());
        }
        inline app::SiteId_t__Boxed* box(app::SiteId_t value) {
            return il2cpp::box_value<app::SiteId_t__Boxed>(get_class(), value);
        }
    } // namespace SiteId_t
} // namespace app::classes::types
