#pragma once
#include <Modloader/app/structs/ManifestId_t.h>
#include <Modloader/app/structs/ManifestId_t__Boxed.h>
#include <Modloader/app/structs/ManifestId_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ManifestId_t {
        inline app::ManifestId_t__Class** type_info() {
            static app::ManifestId_t__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ManifestId_t__Class**)(modloader::win::memory::resolve_rva(0x04798448));
            }
            return cache;
        }
        inline app::ManifestId_t__Class* get_class() {
            return il2cpp::get_class<app::ManifestId_t__Class>(type_info(), "Steamworks", "ManifestId_t");
        }
        inline app::ManifestId_t* create() {
            return il2cpp::create_object<app::ManifestId_t>(get_class());
        }
        inline app::ManifestId_t__Boxed* box(app::ManifestId_t value) {
            return il2cpp::box_value<app::ManifestId_t__Boxed>(get_class(), value);
        }
    } // namespace ManifestId_t
} // namespace app::classes::types
