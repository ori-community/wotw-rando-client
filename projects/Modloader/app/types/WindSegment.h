#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WindSegment {
        namespace {
            inline app::WindSegment__Class* type_info_ref = nullptr;
        }
        inline app::WindSegment__Class** type_info = &type_info_ref;
        inline app::WindSegment__Class* get_class() {
            return il2cpp::get_class<app::WindSegment__Class>(type_info, "", "WindSegment");
        }
        inline app::WindSegment* create() {
            return il2cpp::create_object<app::WindSegment>(get_class());
        }
        inline app::WindSegment__Array* create_array(int size) {
            return il2cpp::array_new<app::WindSegment__Array>(get_class(), size);
        }
        inline app::WindSegment__Array* create_array(const std::vector<app::WindSegment*>& items) {
            return il2cpp::array_new<app::WindSegment__Array>(get_class(), items);
        }
    } // namespace WindSegment
} // namespace app::classes::types
