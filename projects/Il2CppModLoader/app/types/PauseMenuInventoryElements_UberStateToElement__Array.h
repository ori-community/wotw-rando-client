#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PauseMenuInventoryElements_UberStateToElement__Array {
        namespace {
            app::PauseMenuInventoryElements_UberStateToElement__Array__Class* type_info_ref = nullptr;
        }
        app::PauseMenuInventoryElements_UberStateToElement__Array__Class** type_info = &type_info_ref;
        inline app::PauseMenuInventoryElements_UberStateToElement__Array__Class* get_class() {
            return il2cpp::get_class<app::PauseMenuInventoryElements_UberStateToElement__Array__Class>(type_info, "", "PauseMenuInventoryElements+UberStateToElement[]");
        }
        inline app::PauseMenuInventoryElements_UberStateToElement__Array* create() {
            return il2cpp::create_object<app::PauseMenuInventoryElements_UberStateToElement__Array>(get_class());
        }
    } // namespace PauseMenuInventoryElements_UberStateToElement__Array
} // namespace app::classes::types
