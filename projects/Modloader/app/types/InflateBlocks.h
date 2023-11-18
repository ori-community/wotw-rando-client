#pragma once
#include <Modloader/app/structs/InflateBlocks.h>
#include <Modloader/app/structs/InflateBlocks__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InflateBlocks {
        inline app::InflateBlocks__Class** type_info() {
            static app::InflateBlocks__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InflateBlocks__Class**)(modloader::win::memory::resolve_rva(0x047790A8));
            }
            return cache;
        }
        inline app::InflateBlocks__Class* get_class() {
            return il2cpp::get_class<app::InflateBlocks__Class>(type_info(), "Ionic.Zlib", "InflateBlocks");
        }
        inline app::InflateBlocks* create() {
            return il2cpp::create_object<app::InflateBlocks>(get_class());
        }
    } // namespace InflateBlocks
} // namespace app::classes::types
