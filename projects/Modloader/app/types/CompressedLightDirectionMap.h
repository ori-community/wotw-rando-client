#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CompressedLightDirectionMap__Class.h>
#include <Modloader/app/structs/CompressedLightDirectionMap.h>

namespace app::classes::types {
    namespace CompressedLightDirectionMap {
        inline app::CompressedLightDirectionMap__Class** type_info = (app::CompressedLightDirectionMap__Class**)(modloader::win::memory::resolve_rva(0x04745F58));
        inline app::CompressedLightDirectionMap__Class* get_class() {
            return il2cpp::get_class<app::CompressedLightDirectionMap__Class>(type_info, "UberShader", "CompressedLightDirectionMap");
        }
        inline app::CompressedLightDirectionMap* create() {
            return il2cpp::create_object<app::CompressedLightDirectionMap>(get_class());
        }
    } // namespace CompressedLightDirectionMap
} // namespace app::classes::types
