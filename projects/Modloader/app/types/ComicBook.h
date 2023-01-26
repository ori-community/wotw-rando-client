#pragma once
#include <Modloader/app/structs/ComicBook.h>
#include <Modloader/app/structs/ComicBook__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ComicBook {
        inline app::ComicBook__Class** type_info() {
            static app::ComicBook__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ComicBook__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ComicBook__Class* get_class() {
            return il2cpp::get_class<app::ComicBook__Class>(type_info(), "Colorful", "ComicBook");
        }
        inline app::ComicBook* create() {
            return il2cpp::create_object<app::ComicBook>(get_class());
        }
    } // namespace ComicBook
} // namespace app::classes::types
