#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberStateController_ApplierContext {
        inline app::UberStateController_ApplierContext__Class** type_info = (app::UberStateController_ApplierContext__Class**)(modloader::win::memory::resolve_rva(0x0477C628));
        inline app::UberStateController_ApplierContext__Class* get_class() {
            return il2cpp::get_nested_class<app::UberStateController_ApplierContext__Class>(type_info, "Moon", "UberStateController", "ApplierContext");
        }
        inline app::UberStateController_ApplierContext* create() {
            return il2cpp::create_object<app::UberStateController_ApplierContext>(get_class());
        }
        inline app::UberStateController_ApplierContext__Boxed* box(app::UberStateController_ApplierContext value) {
            return il2cpp::box_value<app::UberStateController_ApplierContext__Boxed>(get_class(), value);
        }
        inline app::UberStateController_ApplierContext__Array* create_array(int size) {
            return il2cpp::array_new<app::UberStateController_ApplierContext__Array>(get_class(), size);
        }
        inline app::UberStateController_ApplierContext__Array* create_array(const std::vector<app::UberStateController_ApplierContext>& items) {
            return il2cpp::array_new<app::UberStateController_ApplierContext__Array>(get_class(), items);
        }
    } // namespace UberStateController_ApplierContext
} // namespace app::classes::types
