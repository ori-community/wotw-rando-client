#pragma once
#include <Modloader/app/structs/DeflateInput.h>
#include <Modloader/app/structs/DeflateInput__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DeflateInput {
        inline app::DeflateInput__Class** type_info() {
            static app::DeflateInput__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DeflateInput__Class**)(modloader::win::memory::resolve_rva(0x0478DE50));
            }
            return cache;
        }
        inline app::DeflateInput__Class* get_class() {
            return il2cpp::get_class<app::DeflateInput__Class>(type_info(), "Unity.IO.Compression", "DeflateInput");
        }
        inline app::DeflateInput* create() {
            return il2cpp::create_object<app::DeflateInput>(get_class());
        }
    } // namespace DeflateInput
} // namespace app::classes::types
