#pragma once
#include <Modloader/app/structs/ShaderID_ComicBook.h>
#include <Modloader/app/structs/ShaderID_ComicBook__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_ComicBook {
        inline app::ShaderID_ComicBook__Class** type_info() {
            static app::ShaderID_ComicBook__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_ComicBook__Class**)(modloader::win::memory::resolve_rva(0x04778AD8));
            }
            return cache;
        }
        inline app::ShaderID_ComicBook__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_ComicBook__Class>(type_info(), "Colorful", "ShaderID_ComicBook");
        }
        inline app::ShaderID_ComicBook* create() {
            return il2cpp::create_object<app::ShaderID_ComicBook>(get_class());
        }
    } // namespace ShaderID_ComicBook
} // namespace app::classes::types
