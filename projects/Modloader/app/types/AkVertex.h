#pragma once
#include <Modloader/app/structs/AkVertex.h>
#include <Modloader/app/structs/AkVertex__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkVertex {
        inline app::AkVertex__Class** type_info() {
            static app::AkVertex__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkVertex__Class**)(modloader::win::memory::resolve_rva(0x0479A2F0));
            }
            return cache;
        }
        inline app::AkVertex__Class* get_class() {
            return il2cpp::get_class<app::AkVertex__Class>(type_info(), "", "AkVertex");
        }
        inline app::AkVertex* create() {
            return il2cpp::create_object<app::AkVertex>(get_class());
        }
    } // namespace AkVertex
} // namespace app::classes::types
