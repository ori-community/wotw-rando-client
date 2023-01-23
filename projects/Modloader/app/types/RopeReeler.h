#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RopeReeler__Class.h>
#include <Modloader/app/structs/RopeReeler.h>

namespace app::classes::types {
    namespace RopeReeler {
        namespace {
            inline app::RopeReeler__Class* type_info_ref = nullptr;
        }
        inline app::RopeReeler__Class** type_info = &type_info_ref;
        inline app::RopeReeler__Class* get_class() {
            return il2cpp::get_class<app::RopeReeler__Class>(type_info, "", "RopeReeler");
        }
        inline app::RopeReeler* create() {
            return il2cpp::create_object<app::RopeReeler>(get_class());
        }
    } // namespace RopeReeler
} // namespace app::classes::types
