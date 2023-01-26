#pragma once
#include <Modloader/app/structs/RecommendedAsConfigurableAttribute.h>
#include <Modloader/app/structs/RecommendedAsConfigurableAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RecommendedAsConfigurableAttribute {
        inline app::RecommendedAsConfigurableAttribute__Class** type_info() {
            static app::RecommendedAsConfigurableAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RecommendedAsConfigurableAttribute__Class**)(modloader::win::memory::resolve_rva(0x04711258));
            }
            return cache;
        }
        inline app::RecommendedAsConfigurableAttribute__Class* get_class() {
            return il2cpp::get_class<app::RecommendedAsConfigurableAttribute__Class>(type_info(), "System.ComponentModel", "RecommendedAsConfigurableAttribute");
        }
        inline app::RecommendedAsConfigurableAttribute* create() {
            return il2cpp::create_object<app::RecommendedAsConfigurableAttribute>(get_class());
        }
    } // namespace RecommendedAsConfigurableAttribute
} // namespace app::classes::types
