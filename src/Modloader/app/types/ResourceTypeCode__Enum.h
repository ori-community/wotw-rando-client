#pragma once
#include <Modloader/app/structs/ResourceTypeCode__Enum.h>
#include <Modloader/app/structs/ResourceTypeCode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ResourceTypeCode__Enum {
        inline app::ResourceTypeCode__Enum__Class** type_info() {
            static app::ResourceTypeCode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ResourceTypeCode__Enum__Class**)(modloader::win::memory::resolve_rva(0x047345F8));
            }
            return cache;
        }
        inline app::ResourceTypeCode__Enum__Class* get_class() {
            return il2cpp::get_class<app::ResourceTypeCode__Enum__Class>(type_info(), "System.Resources", "ResourceTypeCode");
        }
        inline app::ResourceTypeCode__Enum* create() {
            return il2cpp::create_object<app::ResourceTypeCode__Enum>(get_class());
        }
    } // namespace ResourceTypeCode__Enum
} // namespace app::classes::types
