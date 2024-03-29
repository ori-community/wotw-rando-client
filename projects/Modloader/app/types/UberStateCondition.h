#pragma once
#include <Modloader/app/structs/UberStateCondition.h>
#include <Modloader/app/structs/UberStateCondition__Array.h>
#include <Modloader/app/structs/UberStateCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberStateCondition {
        inline app::UberStateCondition__Class** type_info() {
            static app::UberStateCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberStateCondition__Class**)(modloader::win::memory::resolve_rva(0x0472FA90));
            }
            return cache;
        }
        inline app::UberStateCondition__Class* get_class() {
            return il2cpp::get_class<app::UberStateCondition__Class>(type_info(), "", "UberStateCondition");
        }
        inline app::UberStateCondition* create() {
            return il2cpp::create_object<app::UberStateCondition>(get_class());
        }
        inline app::UberStateCondition__Array* create_array(int size) {
            return il2cpp::array_new<app::UberStateCondition__Array>(get_class(), size);
        }
        inline app::UberStateCondition__Array* create_array(const std::vector<app::UberStateCondition*>& items) {
            return il2cpp::array_new<app::UberStateCondition__Array>(get_class(), items);
        }
    } // namespace UberStateCondition
} // namespace app::classes::types
