#pragma once
#include <Modloader/app/structs/DynamicReflectionDelegateFactory.h>
#include <Modloader/app/structs/DynamicReflectionDelegateFactory__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DynamicReflectionDelegateFactory {
        inline app::DynamicReflectionDelegateFactory__Class** type_info() {
            static app::DynamicReflectionDelegateFactory__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DynamicReflectionDelegateFactory__Class**)(modloader::win::memory::resolve_rva(0x0476DE08));
            }
            return cache;
        }
        inline app::DynamicReflectionDelegateFactory__Class* get_class() {
            return il2cpp::get_class<app::DynamicReflectionDelegateFactory__Class>(type_info(), "Newtonsoft.Json.Utilities", "DynamicReflectionDelegateFactory");
        }
        inline app::DynamicReflectionDelegateFactory* create() {
            return il2cpp::create_object<app::DynamicReflectionDelegateFactory>(get_class());
        }
    } // namespace DynamicReflectionDelegateFactory
} // namespace app::classes::types
