#pragma once
#include <Modloader/app/structs/FileBasedResourceGroveler.h>
#include <Modloader/app/structs/FileBasedResourceGroveler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FileBasedResourceGroveler {
        inline app::FileBasedResourceGroveler__Class** type_info() {
            static app::FileBasedResourceGroveler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FileBasedResourceGroveler__Class**)(modloader::win::memory::resolve_rva(0x04760478));
            }
            return cache;
        }
        inline app::FileBasedResourceGroveler__Class* get_class() {
            return il2cpp::get_class<app::FileBasedResourceGroveler__Class>(type_info(), "System.Resources", "FileBasedResourceGroveler");
        }
        inline app::FileBasedResourceGroveler* create() {
            return il2cpp::create_object<app::FileBasedResourceGroveler>(get_class());
        }
    } // namespace FileBasedResourceGroveler
} // namespace app::classes::types
