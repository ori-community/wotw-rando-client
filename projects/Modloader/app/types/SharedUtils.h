#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SharedUtils__Class.h>
#include <Modloader/app/structs/SharedUtils.h>

namespace app::classes::types {
    namespace SharedUtils {
        namespace {
            inline app::SharedUtils__Class* type_info_ref = nullptr;
        }
        inline app::SharedUtils__Class** type_info = &type_info_ref;
        inline app::SharedUtils__Class* get_class() {
            return il2cpp::get_class<app::SharedUtils__Class>(type_info, "Ionic.Zlib", "SharedUtils");
        }
        inline app::SharedUtils* create() {
            return il2cpp::create_object<app::SharedUtils>(get_class());
        }
    } // namespace SharedUtils
} // namespace app::classes::types
