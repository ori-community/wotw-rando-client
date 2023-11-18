#pragma once
#include <Modloader/app/structs/InternalConstants.h>
#include <Modloader/app/structs/InternalConstants__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InternalConstants {
        inline app::InternalConstants__Class** type_info() {
            static app::InternalConstants__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InternalConstants__Class**)(modloader::win::memory::resolve_rva(0x04746788));
            }
            return cache;
        }
        inline app::InternalConstants__Class* get_class() {
            return il2cpp::get_class<app::InternalConstants__Class>(type_info(), "Ionic.Zlib", "InternalConstants");
        }
        inline app::InternalConstants* create() {
            return il2cpp::create_object<app::InternalConstants>(get_class());
        }
    } // namespace InternalConstants
} // namespace app::classes::types
