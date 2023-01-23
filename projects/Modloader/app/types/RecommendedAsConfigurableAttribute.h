#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RecommendedAsConfigurableAttribute__Class.h>
#include <Modloader/app/structs/RecommendedAsConfigurableAttribute.h>

namespace app::classes::types {
    namespace RecommendedAsConfigurableAttribute {
        inline app::RecommendedAsConfigurableAttribute__Class** type_info = (app::RecommendedAsConfigurableAttribute__Class**)(modloader::win::memory::resolve_rva(0x04711258));
        inline app::RecommendedAsConfigurableAttribute__Class* get_class() {
            return il2cpp::get_class<app::RecommendedAsConfigurableAttribute__Class>(type_info, "System.ComponentModel", "RecommendedAsConfigurableAttribute");
        }
        inline app::RecommendedAsConfigurableAttribute* create() {
            return il2cpp::create_object<app::RecommendedAsConfigurableAttribute>(get_class());
        }
    } // namespace RecommendedAsConfigurableAttribute
} // namespace app::classes::types
