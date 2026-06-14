#pragma once
#include <Modloader/app/structs/ReflectTypeDescriptionProvider_ReflectedTypeData.h>
#include <Modloader/app/structs/ReflectTypeDescriptionProvider_ReflectedTypeData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReflectTypeDescriptionProvider_ReflectedTypeData {
        inline app::ReflectTypeDescriptionProvider_ReflectedTypeData__Class** type_info() {
            static app::ReflectTypeDescriptionProvider_ReflectedTypeData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ReflectTypeDescriptionProvider_ReflectedTypeData__Class**)(modloader::win::memory::resolve_rva(0x0477BB08));
            }
            return cache;
        }
        inline app::ReflectTypeDescriptionProvider_ReflectedTypeData__Class* get_class() {
            return il2cpp::get_nested_class<app::ReflectTypeDescriptionProvider_ReflectedTypeData__Class>(type_info(), "System.ComponentModel", "ReflectTypeDescriptionProvider", "ReflectedTypeData");
        }
        inline app::ReflectTypeDescriptionProvider_ReflectedTypeData* create() {
            return il2cpp::create_object<app::ReflectTypeDescriptionProvider_ReflectedTypeData>(get_class());
        }
    } // namespace ReflectTypeDescriptionProvider_ReflectedTypeData
} // namespace app::classes::types
