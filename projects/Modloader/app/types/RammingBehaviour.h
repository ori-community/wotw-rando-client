#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RammingBehaviour__Class.h>
#include <Modloader/app/structs/RammingBehaviour.h>

namespace app::classes::types {
    namespace RammingBehaviour {
        namespace {
            inline app::RammingBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::RammingBehaviour__Class** type_info = &type_info_ref;
        inline app::RammingBehaviour__Class* get_class() {
            return il2cpp::get_class<app::RammingBehaviour__Class>(type_info, "Moon", "RammingBehaviour");
        }
        inline app::RammingBehaviour* create() {
            return il2cpp::create_object<app::RammingBehaviour>(get_class());
        }
    } // namespace RammingBehaviour
} // namespace app::classes::types
