#pragma once
#include <Modloader/app/structs/fsContext.h>
#include <Modloader/app/structs/fsContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace fsContext {
        inline app::fsContext__Class** type_info() {
            static app::fsContext__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::fsContext__Class**)(modloader::win::memory::resolve_rva(0x04789140));
            }
            return cache;
        }
        inline app::fsContext__Class* get_class() {
            return il2cpp::get_class<app::fsContext__Class>(type_info(), "FullSerializer", "fsContext");
        }
        inline app::fsContext* create() {
            return il2cpp::create_object<app::fsContext>(get_class());
        }
    } // namespace fsContext
} // namespace app::classes::types
