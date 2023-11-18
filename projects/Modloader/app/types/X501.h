#pragma once
#include <Modloader/app/structs/X501.h>
#include <Modloader/app/structs/X501__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace X501 {
        inline app::X501__Class** type_info() {
            static app::X501__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::X501__Class**)(modloader::win::memory::resolve_rva(0x04783C48));
            }
            return cache;
        }
        inline app::X501__Class* get_class() {
            return il2cpp::get_class<app::X501__Class>(type_info(), "Mono.Security.X509", "X501");
        }
        inline app::X501* create() {
            return il2cpp::create_object<app::X501>(get_class());
        }
    } // namespace X501
} // namespace app::classes::types
