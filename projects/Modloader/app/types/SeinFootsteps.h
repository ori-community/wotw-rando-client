#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinFootsteps__Class.h>
#include <Modloader/app/structs/SeinFootsteps.h>

namespace app::classes::types {
    namespace SeinFootsteps {
        namespace {
            inline app::SeinFootsteps__Class* type_info_ref = nullptr;
        }
        inline app::SeinFootsteps__Class** type_info = &type_info_ref;
        inline app::SeinFootsteps__Class* get_class() {
            return il2cpp::get_class<app::SeinFootsteps__Class>(type_info, "", "SeinFootsteps");
        }
        inline app::SeinFootsteps* create() {
            return il2cpp::create_object<app::SeinFootsteps>(get_class());
        }
    } // namespace SeinFootsteps
} // namespace app::classes::types
