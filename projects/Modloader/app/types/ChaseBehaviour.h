#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ChaseBehaviour__Class.h>
#include <Modloader/app/structs/ChaseBehaviour.h>

namespace app::classes::types {
    namespace ChaseBehaviour {
        namespace {
            inline app::ChaseBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::ChaseBehaviour__Class** type_info = &type_info_ref;
        inline app::ChaseBehaviour__Class* get_class() {
            return il2cpp::get_class<app::ChaseBehaviour__Class>(type_info, "Moon", "ChaseBehaviour");
        }
        inline app::ChaseBehaviour* create() {
            return il2cpp::create_object<app::ChaseBehaviour>(get_class());
        }
    } // namespace ChaseBehaviour
} // namespace app::classes::types
