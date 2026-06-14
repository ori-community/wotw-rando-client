#pragma once
#include <Modloader/app/structs/ResourceReader.h>
#include <Modloader/app/structs/ResourceReader__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ResourceReader {
        inline app::ResourceReader__Class** type_info() {
            static app::ResourceReader__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ResourceReader__Class**)(modloader::win::memory::resolve_rva(0x047240A0));
            }
            return cache;
        }
        inline app::ResourceReader__Class* get_class() {
            return il2cpp::get_class<app::ResourceReader__Class>(type_info(), "System.Resources", "ResourceReader");
        }
        inline app::ResourceReader* create() {
            return il2cpp::create_object<app::ResourceReader>(get_class());
        }
    } // namespace ResourceReader
} // namespace app::classes::types
