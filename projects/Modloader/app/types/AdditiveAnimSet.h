#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AdditiveAnimSet__Class.h>
#include <Modloader/app/structs/AdditiveAnimSet.h>
#include <Modloader/app/structs/AdditiveAnimSet__Boxed.h>

namespace app::classes::types {
    namespace AdditiveAnimSet {
        namespace {
            inline app::AdditiveAnimSet__Class* type_info_ref = nullptr;
        }
        inline app::AdditiveAnimSet__Class** type_info = &type_info_ref;
        inline app::AdditiveAnimSet__Class* get_class() {
            return il2cpp::get_class<app::AdditiveAnimSet__Class>(type_info, "", "AdditiveAnimSet");
        }
        inline app::AdditiveAnimSet* create() {
            return il2cpp::create_object<app::AdditiveAnimSet>(get_class());
        }
        inline app::AdditiveAnimSet__Boxed* box(app::AdditiveAnimSet value) {
            return il2cpp::box_value<app::AdditiveAnimSet__Boxed>(get_class(), value);
        }
    } // namespace AdditiveAnimSet
} // namespace app::classes::types
