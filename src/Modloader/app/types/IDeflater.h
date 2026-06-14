#pragma once
#include <Modloader/app/structs/IDeflater.h>
#include <Modloader/app/structs/IDeflater__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IDeflater {
        inline app::IDeflater__Class** type_info() {
            static app::IDeflater__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IDeflater__Class**)(modloader::win::memory::resolve_rva(0x04775340));
            }
            return cache;
        }
        inline app::IDeflater__Class* get_class() {
            return il2cpp::get_class<app::IDeflater__Class>(type_info(), "Unity.IO.Compression", "IDeflater");
        }
    } // namespace IDeflater
} // namespace app::classes::types
