#pragma once
#include <Modloader/app/structs/DynamicDataResolver.h>
#include <Modloader/app/structs/DynamicDataResolver__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DynamicDataResolver {
        inline app::DynamicDataResolver__Class** type_info() {
            static app::DynamicDataResolver__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DynamicDataResolver__Class**)(modloader::win::memory::resolve_rva(0x04752C90));
            }
            return cache;
        }
        inline app::DynamicDataResolver__Class* get_class() {
            return il2cpp::get_class<app::DynamicDataResolver__Class>(type_info(), "Moon", "DynamicDataResolver");
        }
        inline app::DynamicDataResolver* create() {
            return il2cpp::create_object<app::DynamicDataResolver>(get_class());
        }
    } // namespace DynamicDataResolver
} // namespace app::classes::types
