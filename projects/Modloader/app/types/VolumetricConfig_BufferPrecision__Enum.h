#pragma once
#include <Modloader/app/structs/VolumetricConfig_BufferPrecision__Enum.h>
#include <Modloader/app/structs/VolumetricConfig_BufferPrecision__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VolumetricConfig_BufferPrecision__Enum {
        inline app::VolumetricConfig_BufferPrecision__Enum__Class** type_info() {
            static app::VolumetricConfig_BufferPrecision__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VolumetricConfig_BufferPrecision__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VolumetricConfig_BufferPrecision__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::VolumetricConfig_BufferPrecision__Enum__Class>(type_info(), "Moon.Rendering", "VolumetricConfig", "BufferPrecision");
        }
        inline app::VolumetricConfig_BufferPrecision__Enum* create() {
            return il2cpp::create_object<app::VolumetricConfig_BufferPrecision__Enum>(get_class());
        }
    } // namespace VolumetricConfig_BufferPrecision__Enum
} // namespace app::classes::types
