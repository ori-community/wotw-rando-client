#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberStateController_ApplierContext__Array__Class.h>
#include <Modloader/app/structs/UberStateController_ApplierContext__Array.h>

namespace app::classes::types {
    namespace UberStateController_ApplierContext__Array {
        namespace {
            inline app::UberStateController_ApplierContext__Array__Class* type_info_ref = nullptr;
        }
        inline app::UberStateController_ApplierContext__Array__Class** type_info = &type_info_ref;
        inline app::UberStateController_ApplierContext__Array__Class* get_class() {
            return il2cpp::get_class<app::UberStateController_ApplierContext__Array__Class>(type_info, "Moon", "UberStateController+ApplierContext[]");
        }
        inline app::UberStateController_ApplierContext__Array* create() {
            return il2cpp::create_object<app::UberStateController_ApplierContext__Array>(get_class());
        }
    } // namespace UberStateController_ApplierContext__Array
} // namespace app::classes::types
