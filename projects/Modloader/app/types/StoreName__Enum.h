#pragma once
#include <Modloader/app/structs/StoreName__Enum.h>
#include <Modloader/app/structs/StoreName__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StoreName__Enum {
        inline app::StoreName__Enum__Class** type_info() {
            static app::StoreName__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StoreName__Enum__Class**)(modloader::win::memory::resolve_rva(0x04704B10));
            }
            return cache;
        }
        inline app::StoreName__Enum__Class* get_class() {
            return il2cpp::get_class<app::StoreName__Enum__Class>(type_info(), "System.Security.Cryptography.X509Certificates", "StoreName");
        }
        inline app::StoreName__Enum* create() {
            return il2cpp::create_object<app::StoreName__Enum>(get_class());
        }
    } // namespace StoreName__Enum
} // namespace app::classes::types
