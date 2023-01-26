#pragma once
#include <Modloader/app/structs/Inflater.h>
#include <Modloader/app/structs/Inflater__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Inflater {
        inline app::Inflater__Class** type_info() {
            static app::Inflater__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Inflater__Class**)(modloader::win::memory::resolve_rva(0x04776CA8));
            }
            return cache;
        }
        inline app::Inflater__Class* get_class() {
            return il2cpp::get_class<app::Inflater__Class>(type_info(), "Unity.IO.Compression", "Inflater");
        }
        inline app::Inflater* create() {
            return il2cpp::create_object<app::Inflater>(get_class());
        }
    } // namespace Inflater
} // namespace app::classes::types
