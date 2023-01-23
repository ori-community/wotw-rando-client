#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FallBehaviour__Class.h>
#include <Modloader/app/structs/FallBehaviour.h>

namespace app::classes::types {
    namespace FallBehaviour {
        namespace {
            inline app::FallBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::FallBehaviour__Class** type_info = &type_info_ref;
        inline app::FallBehaviour__Class* get_class() {
            return il2cpp::get_class<app::FallBehaviour__Class>(type_info, "", "FallBehaviour");
        }
        inline app::FallBehaviour* create() {
            return il2cpp::create_object<app::FallBehaviour>(get_class());
        }
    } // namespace FallBehaviour
} // namespace app::classes::types
