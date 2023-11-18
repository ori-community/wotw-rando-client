#pragma once
#include <Modloader/app/structs/InvalidFilterCriteriaException.h>
#include <Modloader/app/structs/InvalidFilterCriteriaException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InvalidFilterCriteriaException {
        inline app::InvalidFilterCriteriaException__Class** type_info() {
            static app::InvalidFilterCriteriaException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InvalidFilterCriteriaException__Class**)(modloader::win::memory::resolve_rva(0x04750080));
            }
            return cache;
        }
        inline app::InvalidFilterCriteriaException__Class* get_class() {
            return il2cpp::get_class<app::InvalidFilterCriteriaException__Class>(type_info(), "System.Reflection", "InvalidFilterCriteriaException");
        }
        inline app::InvalidFilterCriteriaException* create() {
            return il2cpp::create_object<app::InvalidFilterCriteriaException>(get_class());
        }
    } // namespace InvalidFilterCriteriaException
} // namespace app::classes::types
