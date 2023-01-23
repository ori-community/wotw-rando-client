#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/fsTypeCache__Class.h>
#include <Modloader/app/structs/fsTypeCache.h>

namespace app::classes::types {
    namespace fsTypeCache {
        inline app::fsTypeCache__Class** type_info = (app::fsTypeCache__Class**)(modloader::win::memory::resolve_rva(0x047543B0));
        inline app::fsTypeCache__Class* get_class() {
            return il2cpp::get_class<app::fsTypeCache__Class>(type_info, "FullSerializer.Internal", "fsTypeCache");
        }
        inline app::fsTypeCache* create() {
            return il2cpp::create_object<app::fsTypeCache>(get_class());
        }
    } // namespace fsTypeCache
} // namespace app::classes::types
