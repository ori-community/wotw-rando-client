#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IMontageEventProvider__Array__Class.h>
#include <Modloader/app/structs/IMontageEventProvider__Array.h>

namespace app::classes::types {
    namespace IMontageEventProvider__Array {
        namespace {
            inline app::IMontageEventProvider__Array__Class* type_info_ref = nullptr;
        }
        inline app::IMontageEventProvider__Array__Class** type_info = &type_info_ref;
        inline app::IMontageEventProvider__Array__Class* get_class() {
            return il2cpp::get_class<app::IMontageEventProvider__Array__Class>(type_info, "", "IMontageEventProvider[]");
        }
        inline app::IMontageEventProvider__Array* create() {
            return il2cpp::create_object<app::IMontageEventProvider__Array>(get_class());
        }
    } // namespace IMontageEventProvider__Array
} // namespace app::classes::types
