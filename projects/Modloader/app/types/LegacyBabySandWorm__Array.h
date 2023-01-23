#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LegacyBabySandWorm__Array__Class.h>
#include <Modloader/app/structs/LegacyBabySandWorm__Array.h>

namespace app::classes::types {
    namespace LegacyBabySandWorm__Array {
        namespace {
            inline app::LegacyBabySandWorm__Array__Class* type_info_ref = nullptr;
        }
        inline app::LegacyBabySandWorm__Array__Class** type_info = &type_info_ref;
        inline app::LegacyBabySandWorm__Array__Class* get_class() {
            return il2cpp::get_class<app::LegacyBabySandWorm__Array__Class>(type_info, "", "LegacyBabySandWorm[]");
        }
        inline app::LegacyBabySandWorm__Array* create() {
            return il2cpp::create_object<app::LegacyBabySandWorm__Array>(get_class());
        }
    } // namespace LegacyBabySandWorm__Array
} // namespace app::classes::types
