#pragma once
#include <Modloader/app/structs/SeinPickupProcessor.h>
#include <Modloader/app/structs/SeinPickupProcessor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinPickupProcessor {
        inline app::SeinPickupProcessor__Class** type_info() {
            static app::SeinPickupProcessor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinPickupProcessor__Class**)(modloader::win::memory::resolve_rva(0x0474D4B0));
            }
            return cache;
        }
        inline app::SeinPickupProcessor__Class* get_class() {
            return il2cpp::get_class<app::SeinPickupProcessor__Class>(type_info(), "", "SeinPickupProcessor");
        }
        inline app::SeinPickupProcessor* create() {
            return il2cpp::create_object<app::SeinPickupProcessor>(get_class());
        }
    } // namespace SeinPickupProcessor
} // namespace app::classes::types
