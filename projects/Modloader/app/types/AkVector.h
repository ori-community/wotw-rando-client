#pragma once
#include <Modloader/app/structs/AkVector.h>
#include <Modloader/app/structs/AkVector__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkVector {
        inline app::AkVector__Class** type_info() {
            static app::AkVector__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkVector__Class**)(modloader::win::memory::resolve_rva(0x0471B758));
            }
            return cache;
        }
        inline app::AkVector__Class* get_class() {
            return il2cpp::get_class<app::AkVector__Class>(type_info(), "", "AkVector");
        }
        inline app::AkVector* create() {
            return il2cpp::create_object<app::AkVector>(get_class());
        }
    } // namespace AkVector
} // namespace app::classes::types
