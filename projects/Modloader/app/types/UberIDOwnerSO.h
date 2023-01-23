#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberIDOwnerSO__Class.h>
#include <Modloader/app/structs/UberIDOwnerSO.h>
#include <Modloader/app/structs/UberIDOwnerSO__Array.h>

namespace app::classes::types {
    namespace UberIDOwnerSO {
        namespace {
            inline app::UberIDOwnerSO__Class* type_info_ref = nullptr;
        }
        inline app::UberIDOwnerSO__Class** type_info = &type_info_ref;
        inline app::UberIDOwnerSO__Class* get_class() {
            return il2cpp::get_class<app::UberIDOwnerSO__Class>(type_info, "Moon", "UberIDOwnerSO");
        }
        inline app::UberIDOwnerSO* create() {
            return il2cpp::create_object<app::UberIDOwnerSO>(get_class());
        }
        inline app::UberIDOwnerSO__Array* create_array(int size) {
            return il2cpp::array_new<app::UberIDOwnerSO__Array>(get_class(), size);
        }
        inline app::UberIDOwnerSO__Array* create_array(const std::vector<app::UberIDOwnerSO*>& items) {
            return il2cpp::array_new<app::UberIDOwnerSO__Array>(get_class(), items);
        }
    } // namespace UberIDOwnerSO
} // namespace app::classes::types
