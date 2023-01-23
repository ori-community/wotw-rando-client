#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/InflateCodes__Class.h>
#include <Modloader/app/structs/InflateCodes.h>

namespace app::classes::types {
    namespace InflateCodes {
        inline app::InflateCodes__Class** type_info = (app::InflateCodes__Class**)(modloader::win::memory::resolve_rva(0x047301D8));
        inline app::InflateCodes__Class* get_class() {
            return il2cpp::get_class<app::InflateCodes__Class>(type_info, "Ionic.Zlib", "InflateCodes");
        }
        inline app::InflateCodes* create() {
            return il2cpp::create_object<app::InflateCodes>(get_class());
        }
    } // namespace InflateCodes
} // namespace app::classes::types
