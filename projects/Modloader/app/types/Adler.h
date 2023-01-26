#pragma once
#include <Modloader/app/structs/Adler.h>
#include <Modloader/app/structs/Adler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Adler {
        inline app::Adler__Class** type_info() {
            static app::Adler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Adler__Class**)(modloader::win::memory::resolve_rva(0x04704C78));
            }
            return cache;
        }
        inline app::Adler__Class* get_class() {
            return il2cpp::get_class<app::Adler__Class>(type_info(), "Ionic.Zlib", "Adler");
        }
        inline app::Adler* create() {
            return il2cpp::create_object<app::Adler>(get_class());
        }
    } // namespace Adler
} // namespace app::classes::types
