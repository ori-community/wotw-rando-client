#pragma once
#include <Modloader/app/structs/ResourceLocation__Enum.h>
#include <Modloader/app/structs/ResourceLocation__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ResourceLocation__Enum {
        inline app::ResourceLocation__Enum__Class** type_info() {
            static app::ResourceLocation__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ResourceLocation__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ResourceLocation__Enum__Class* get_class() {
            return il2cpp::get_class<app::ResourceLocation__Enum__Class>(type_info(), "System.Reflection", "ResourceLocation");
        }
        inline app::ResourceLocation__Enum* create() {
            return il2cpp::create_object<app::ResourceLocation__Enum>(get_class());
        }
    } // namespace ResourceLocation__Enum
} // namespace app::classes::types
