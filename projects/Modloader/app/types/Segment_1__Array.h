#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Segment_1__Array__Class.h>
#include <Modloader/app/structs/Segment_1__Array.h>

namespace app::classes::types {
    namespace Segment_1__Array {
        namespace {
            inline app::Segment_1__Array__Class* type_info_ref = nullptr;
        }
        inline app::Segment_1__Array__Class** type_info = &type_info_ref;
        inline app::Segment_1__Array__Class* get_class() {
            return il2cpp::get_class<app::Segment_1__Array__Class>(type_info, "", "Segment[]");
        }
        inline app::Segment_1__Array* create() {
            return il2cpp::create_object<app::Segment_1__Array>(get_class());
        }
    } // namespace Segment_1__Array
} // namespace app::classes::types
