#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinDamageOwner__Class.h>
#include <Modloader/app/structs/SeinDamageOwner.h>

namespace app::classes::types {
    namespace SeinDamageOwner {
        namespace {
            inline app::SeinDamageOwner__Class* type_info_ref = nullptr;
        }
        inline app::SeinDamageOwner__Class** type_info = &type_info_ref;
        inline app::SeinDamageOwner__Class* get_class() {
            return il2cpp::get_class<app::SeinDamageOwner__Class>(type_info, "Moon", "SeinDamageOwner");
        }
        inline app::SeinDamageOwner* create() {
            return il2cpp::create_object<app::SeinDamageOwner>(get_class());
        }
    } // namespace SeinDamageOwner
} // namespace app::classes::types
