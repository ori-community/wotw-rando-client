#pragma once
#include <Modloader/app/structs/DynamicUtils_BinderWrapper.h>
#include <Modloader/app/structs/DynamicUtils_BinderWrapper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DynamicUtils_BinderWrapper {
        inline app::DynamicUtils_BinderWrapper__Class** type_info() {
            static app::DynamicUtils_BinderWrapper__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DynamicUtils_BinderWrapper__Class**)(modloader::win::memory::resolve_rva(0x04744358));
            }
            return cache;
        }
        inline app::DynamicUtils_BinderWrapper__Class* get_class() {
            return il2cpp::get_nested_class<app::DynamicUtils_BinderWrapper__Class>(type_info(), "Newtonsoft.Json.Utilities", "DynamicUtils", "BinderWrapper");
        }
        inline app::DynamicUtils_BinderWrapper* create() {
            return il2cpp::create_object<app::DynamicUtils_BinderWrapper>(get_class());
        }
    } // namespace DynamicUtils_BinderWrapper
} // namespace app::classes::types
