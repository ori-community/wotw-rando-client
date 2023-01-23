#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AdditiveBodyRotation__Class.h>
#include <Modloader/app/structs/AdditiveBodyRotation.h>

namespace app::classes::types {
    namespace AdditiveBodyRotation {
        namespace {
            inline app::AdditiveBodyRotation__Class* type_info_ref = nullptr;
        }
        inline app::AdditiveBodyRotation__Class** type_info = &type_info_ref;
        inline app::AdditiveBodyRotation__Class* get_class() {
            return il2cpp::get_class<app::AdditiveBodyRotation__Class>(type_info, "Moon", "AdditiveBodyRotation");
        }
        inline app::AdditiveBodyRotation* create() {
            return il2cpp::create_object<app::AdditiveBodyRotation>(get_class());
        }
    } // namespace AdditiveBodyRotation
} // namespace app::classes::types
