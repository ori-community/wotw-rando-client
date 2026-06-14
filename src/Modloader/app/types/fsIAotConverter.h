#pragma once
#include <Modloader/app/structs/fsIAotConverter.h>
#include <Modloader/app/structs/fsIAotConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace fsIAotConverter {
        inline app::fsIAotConverter__Class** type_info() {
            static app::fsIAotConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::fsIAotConverter__Class**)(modloader::win::memory::resolve_rva(0x04783DC0));
            }
            return cache;
        }
        inline app::fsIAotConverter__Class* get_class() {
            return il2cpp::get_class<app::fsIAotConverter__Class>(type_info(), "FullSerializer", "fsIAotConverter");
        }
    } // namespace fsIAotConverter
} // namespace app::classes::types
