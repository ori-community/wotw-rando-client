#pragma once
#include <Modloader/app/structs/PlatformingFXFunctionality.h>
#include <Modloader/app/structs/PlatformingFXFunctionality__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlatformingFXFunctionality {
        inline app::PlatformingFXFunctionality__Class** type_info() {
            static app::PlatformingFXFunctionality__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlatformingFXFunctionality__Class**)(modloader::win::memory::resolve_rva(0x04794980));
            }
            return cache;
        }
        inline app::PlatformingFXFunctionality__Class* get_class() {
            return il2cpp::get_class<app::PlatformingFXFunctionality__Class>(type_info(), "", "PlatformingFXFunctionality");
        }
        inline app::PlatformingFXFunctionality* create() {
            return il2cpp::create_object<app::PlatformingFXFunctionality>(get_class());
        }
    } // namespace PlatformingFXFunctionality
} // namespace app::classes::types
