#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SimpleCollator_PreviousInfo {
        namespace {
            inline app::SimpleCollator_PreviousInfo__Class* type_info_ref = nullptr;
        }
        inline app::SimpleCollator_PreviousInfo__Class** type_info = &type_info_ref;
        inline app::SimpleCollator_PreviousInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::SimpleCollator_PreviousInfo__Class>(type_info, "Mono.Globalization.Unicode", "SimpleCollator", "PreviousInfo");
        }
        inline app::SimpleCollator_PreviousInfo* create() {
            return il2cpp::create_object<app::SimpleCollator_PreviousInfo>(get_class());
        }
        inline app::SimpleCollator_PreviousInfo__Boxed* box(app::SimpleCollator_PreviousInfo value) {
            return il2cpp::box_value<app::SimpleCollator_PreviousInfo__Boxed>(get_class(), value);
        }
    } // namespace SimpleCollator_PreviousInfo
} // namespace app::classes::types
