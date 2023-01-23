#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TentacleTurnBehaviour__Class.h>
#include <Modloader/app/structs/TentacleTurnBehaviour.h>

namespace app::classes::types {
    namespace TentacleTurnBehaviour {
        namespace {
            inline app::TentacleTurnBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::TentacleTurnBehaviour__Class** type_info = &type_info_ref;
        inline app::TentacleTurnBehaviour__Class* get_class() {
            return il2cpp::get_class<app::TentacleTurnBehaviour__Class>(type_info, "Moon", "TentacleTurnBehaviour");
        }
        inline app::TentacleTurnBehaviour* create() {
            return il2cpp::create_object<app::TentacleTurnBehaviour>(get_class());
        }
    } // namespace TentacleTurnBehaviour
} // namespace app::classes::types
