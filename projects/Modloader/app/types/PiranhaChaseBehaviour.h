#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PiranhaChaseBehaviour__Class.h>
#include <Modloader/app/structs/PiranhaChaseBehaviour.h>

namespace app::classes::types {
    namespace PiranhaChaseBehaviour {
        namespace {
            inline app::PiranhaChaseBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::PiranhaChaseBehaviour__Class** type_info = &type_info_ref;
        inline app::PiranhaChaseBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PiranhaChaseBehaviour__Class>(type_info, "", "PiranhaChaseBehaviour");
        }
        inline app::PiranhaChaseBehaviour* create() {
            return il2cpp::create_object<app::PiranhaChaseBehaviour>(get_class());
        }
    } // namespace PiranhaChaseBehaviour
} // namespace app::classes::types
