#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinMortality__Class.h>
#include <Modloader/app/structs/SeinMortality.h>

namespace app::classes::types {
    namespace SeinMortality {
        namespace {
            inline app::SeinMortality__Class* type_info_ref = nullptr;
        }
        inline app::SeinMortality__Class** type_info = &type_info_ref;
        inline app::SeinMortality__Class* get_class() {
            return il2cpp::get_class<app::SeinMortality__Class>(type_info, "", "SeinMortality");
        }
        inline app::SeinMortality* create() {
            return il2cpp::create_object<app::SeinMortality>(get_class());
        }
    } // namespace SeinMortality
} // namespace app::classes::types
