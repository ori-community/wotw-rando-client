#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ComicBook__Class.h>
#include <Modloader/app/structs/ComicBook.h>

namespace app::classes::types {
    namespace ComicBook {
        namespace {
            inline app::ComicBook__Class* type_info_ref = nullptr;
        }
        inline app::ComicBook__Class** type_info = &type_info_ref;
        inline app::ComicBook__Class* get_class() {
            return il2cpp::get_class<app::ComicBook__Class>(type_info, "Colorful", "ComicBook");
        }
        inline app::ComicBook* create() {
            return il2cpp::create_object<app::ComicBook>(get_class());
        }
    } // namespace ComicBook
} // namespace app::classes::types
