#pragma once
#include <Modloader/app/structs/DynamicValueProvider.h>
#include <Modloader/app/structs/DynamicValueProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DynamicValueProvider {
        inline app::DynamicValueProvider__Class** type_info() {
            static app::DynamicValueProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DynamicValueProvider__Class**)(modloader::win::memory::resolve_rva(0x0478DDB0));
            }
            return cache;
        }
        inline app::DynamicValueProvider__Class* get_class() {
            return il2cpp::get_class<app::DynamicValueProvider__Class>(type_info(), "Newtonsoft.Json.Serialization", "DynamicValueProvider");
        }
        inline app::DynamicValueProvider* create() {
            return il2cpp::create_object<app::DynamicValueProvider>(get_class());
        }
    } // namespace DynamicValueProvider
} // namespace app::classes::types
