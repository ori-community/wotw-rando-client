#pragma once
#include <Modloader/app/structs/FileWebRequestCreator.h>
#include <Modloader/app/structs/FileWebRequestCreator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FileWebRequestCreator {
        inline app::FileWebRequestCreator__Class** type_info() {
            static app::FileWebRequestCreator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FileWebRequestCreator__Class**)(modloader::win::memory::resolve_rva(0x04751258));
            }
            return cache;
        }
        inline app::FileWebRequestCreator__Class* get_class() {
            return il2cpp::get_class<app::FileWebRequestCreator__Class>(type_info(), "System.Net", "FileWebRequestCreator");
        }
        inline app::FileWebRequestCreator* create() {
            return il2cpp::create_object<app::FileWebRequestCreator>(get_class());
        }
    } // namespace FileWebRequestCreator
} // namespace app::classes::types
