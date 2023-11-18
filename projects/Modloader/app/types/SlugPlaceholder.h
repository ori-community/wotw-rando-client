#pragma once
#include <Modloader/app/structs/SlugPlaceholder.h>
#include <Modloader/app/structs/SlugPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SlugPlaceholder {
        inline app::SlugPlaceholder__Class** type_info() {
            static app::SlugPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SlugPlaceholder__Class**)(modloader::win::memory::resolve_rva(0x047575E0));
            }
            return cache;
        }
        inline app::SlugPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::SlugPlaceholder__Class>(type_info(), "", "SlugPlaceholder");
        }
        inline app::SlugPlaceholder* create() {
            return il2cpp::create_object<app::SlugPlaceholder>(get_class());
        }
    } // namespace SlugPlaceholder
} // namespace app::classes::types
